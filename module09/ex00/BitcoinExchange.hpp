#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, double> data;
		void	vaildateCsvAndSaveData();
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);
		~BitcoinExchange();
		
};

#endif