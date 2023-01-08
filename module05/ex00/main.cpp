#include "Bureaucrat.hpp"

int main()
{
	{
		std::cout << "=====test1=====" << std::endl;
		try
		{
			Bureaucrat minsu("minsu", 1);
			Bureaucrat minsu2("minsu2", 150);
			std::cout << minsu << std::endl;
			std::cout << minsu2 << std::endl;
			minsu.increaseGrade(); // 예외 발생
			minsu2.decreaseGrade();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}

	{
		std::cout << "=====test2=====" << std::endl;
		try
		{
			Bureaucrat minsu("minsu", 1);
			Bureaucrat minsu2("minsu2", 150);
			std::cout << minsu << std::endl;
			std::cout << minsu2 << std::endl;
			minsu.decreaseGrade();
			minsu2.increaseGrade();
			std::cout << minsu << std::endl;
			std::cout << minsu2 << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}

	{
		std::cout << "=====test3=====" << std::endl;
		try
		{
			Bureaucrat minsu2("minsu2", 151);
			Bureaucrat minsu("minsu", 0); // 예외 발생
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
}