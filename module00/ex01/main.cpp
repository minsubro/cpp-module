
#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phonebook;
	int idx = 0;

	while (1)
	{
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			phonebook.add(idx);
			idx++;
			if (idx == 8)
				idx = 0;
		}
		if (cmd.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		if (cmd.compare("EXIT") == 0)
			break;	
	}
}