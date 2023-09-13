#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <vector>
# include <ctime>

class BitcoinExchange {
	private:
		std::map<std::string, double> data;
		void	vaildateCsvAndSaveData();
		void	printValue(std::string, double);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);
		~BitcoinExchange();
		
		void	run(std::string fileName);

		// exception
		class ErrorException {
			private :
				std::string message;
			public :
				ErrorException(std::string);
				const char *what() const throw();
		};

		// test
		void	print();
		
};

#endif