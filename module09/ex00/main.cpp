#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	try
	{
		if (ac < 2)
			throw BitcoinExchange::ErrorException("Error: could not open file.");
		BitcoinExchange coin;
		coin.run(av[1]);
	}
	catch(const BitcoinExchange::ErrorException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}