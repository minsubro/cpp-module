#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat("minsu", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}