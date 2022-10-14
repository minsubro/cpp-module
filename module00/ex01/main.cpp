
#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phonebook;
	int idx = 0;

	while (1)
	{
		std::cout << "Please enter a command : ";
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			phonebook.add(idx);
			idx++;
			if (idx == 8)
				idx = 0;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		else if (cmd.compare("EXIT") == 0)
			break;	
		else
			std::cout << "Invalid command Please enter it again" << std::endl;
	}
}