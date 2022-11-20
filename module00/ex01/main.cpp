
#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phonebook;
	int idx = 0;

	std::cout << "Please enter a command : ";
	while (getline(std::cin, cmd))
	{
		if (!(cmd.compare("ADD")) || !(cmd.compare("add")))
		{
			if (!phonebook.add(idx))
				return (0);
			idx++;
			if (idx == 8)
				idx = 0;
		}
		else if (!(cmd.compare("SEARCH")) || !(cmd.compare("search")))
		{
			if (!phonebook.search())
				return (0);
		}
		else if (!(cmd.compare("EXIT")) || !(cmd.compare("exit")))
			break;	
		else
			std::cout << "Invalid command Please enter it again" << std::endl;
		std::cout << "Please enter a command : ";
	}
}