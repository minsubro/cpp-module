#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->vaildateCsvAndSaveData();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &origin)
{
	if (this != &origin) {
		this->data = origin.data;
	}
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &origin) 
{
	if (this != &origin) {
		this->data = origin.data;
	}
	return (*this);
}

std::pair<std::string, std::pair<std::string, std::string> >datesplit(const std::string& str, const std::string& delims)
{
	std::pair<std::string, std::pair<std::string, std::string> > date;
	size_t	start = 0, end = 0;
	int i = 0;

	while ((end = str.find_first_of(delims, start)) != std::string::npos) {
		if (end != start) {
			if (i == 0)
				date.first = str.substr(start, end - start);
			if (i == 1)
				date.second.first = str.substr(start, end - start);
		}
		start = end + 1;
		i++;
	}
	if (start < str.length())
		date.second.second = str.substr(start);
	return (date);
}

bool	checkDay(int year, int month, int day)
{
	if (day < 1 || day > 31)
		return false;
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) 
		return false;
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        if (day > 29 && month == 2) 
			return false;
    }
	else if (day > 28 && month == 2) 
		return false;
	return true;
}

bool checkDigit(std::vector<std::string> format)
{
	for (size_t i = 0; i < format.size(); i++) {
		for (size_t j = 0; j < format[i].size(); j++)
		{
			if (!isdigit(format[i][j]))
				return (false);
		}
	}
	return (true);
}

void	vaildateDate(std::string date)
{
	std::pair<std::string, std::pair<std::string, std::string> >format;
	time_t	timer = time(NULL);
	struct tm* t = localtime(&timer);
	int year, month, day;

	format = datesplit(date, "-");
	year = std::atoi(format.first.c_str());
	month = std::atoi(format.second.first.c_str());
	day = std::atoi(format.second.second.c_str());
	if (year < 1 || year > (t->tm_year + 1900))
		throw BitcoinExchange::ErrorException("Error: bad input => " + date);
	if (month < 1 || month > 12)
		throw BitcoinExchange::ErrorException("Error: bad input => " + date);
	if (!checkDay(year, month, day))
		throw BitcoinExchange::ErrorException("Error: bad input => " + date);
}

void	vaildateValue(std::string v)
{
	char *p = NULL;
	double value = std::strtod(v.c_str(), &p);
	if (value == 0.0 && p) {
		for (size_t i = 0; p[i]; i++) {
			throw BitcoinExchange::ErrorException("Error: not a positive number.");	
		}
	}
	if (value < 0.0)
		throw BitcoinExchange::ErrorException("Error: not a positive number.");
}

void	vaildateInputValue(std::string v)
{
	char *p = nullptr;
	double value = std::strtod(v.c_str(), &p);
	if (p != nullptr && *p != 0) {
		throw BitcoinExchange::ErrorException("Error: not a positive number.");	
	}
	if (value > 1000.0)
		throw BitcoinExchange::ErrorException("Error: too large a number.");
	if (value < 0.0)
		throw BitcoinExchange::ErrorException("Error: not a positive number.");
}

void	BitcoinExchange::vaildateCsvAndSaveData()
{
	std::ifstream				csv("data.csv");
	std::string					line;
	std::string					date;
	std::string					value;
	
	if (!csv.is_open())
		throw ErrorException("Error: could not open file.");
	std::getline(csv, line);
	if (line.compare("date,exchange_rate"))
		throw ErrorException("Error: invaild format");
	while (std::getline(csv, line))
	{
		if (line.size() == 0)
			continue;
		size_t pos = line.find(",");
		if (pos == std::string::npos)
			throw ErrorException("Error: bad input => " + line);
		date = line.substr(0, pos);
		value = line.substr(pos + 1, line.size());
		if (date.size() == 0 || value.size() == 0)
			throw ErrorException("Error: bad input => " + line);
		vaildateDate(date);
		vaildateValue(value);
		this->data.insert(std::make_pair(date, std::strtod(value.c_str(), NULL)));
	}
}

void	BitcoinExchange::printValue(std::string date, double value) {
	std::map<std::string, double>::iterator it;
	
	it = this->data.find(date);
	if (it == data.end()) {
		it = this->data.lower_bound(date);
		if (it == data.begin())
			throw ErrorException("Error: bad input");
		it--;
	}
	std::cout << date << " => " << value << " = " << it->second * value << std::endl; 
}

void	BitcoinExchange::run(std::string  fileName)
{
	std::ifstream	file(fileName);
	std::string		line;
	std::string		date;
	std::string		value;

	if (!file.is_open())
		throw ErrorException("Error: could not open file.");
	std::getline(file, line);
	if (line.compare("date | value"))
		throw ErrorException("Error: invaild format");
	while (std::getline(file, line))
	{
		try
		{	if (line.size() == 0)
				continue;
			size_t pos = line.find(" | ");
			if (pos == std::string::npos)
				throw ErrorException("Error: bad input => " + line);
			date = line.substr(0, pos);
			value = line.substr(pos + 3, line.size());
			if (date.size() == 0 || value.size() == 0)
				throw ErrorException("Error: bad input => " + line);
			vaildateDate(date);
			vaildateInputValue(value);
			this->printValue(date, std::strtod(value.c_str(), NULL));
		}
		catch(const ErrorException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
}


// exception
BitcoinExchange::ErrorException::ErrorException(std::string message) {
	this->message = message;
}

const char *BitcoinExchange::ErrorException::what() const throw() {
	return this->message.c_str();
}

// test
void BitcoinExchange::print() {
	std::map<std::string, double>::iterator it;
	
	for (it = this->data.begin(); it != this->data.end(); it++)
	{
		std::cout << it->first << "," << it->second << std::endl;
	}
	
}