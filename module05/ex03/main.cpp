#include "Intern.hpp"

void leaks() { system("leaks a.out"); }

int main()
{
    char n;
	{
        atexit(leaks);
        try
        {
            std::cout << "=====TEST1=====\n" << std::endl;
            Intern intern;
            AForm *shu = intern.makeForm("Shrubbery Creation", "home");
            std::cout << *shu << std::endl;
            Bureaucrat a("a", 136);
            Bureaucrat b("b", 144);
            Bureaucrat c("c", 150);
            c.signForm(*shu);
            a.executeForm(*shu);
            b.signForm(*shu);
            b.executeForm(*shu);
            a.executeForm(*shu);
            std::cout << *shu << std::endl;
            delete shu;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cin >> n;
    {
        try
        {
            std::cout << "\n=====TEST2=====\n" << std::endl;
            Intern intern;
            AForm *robo = intern.makeForm("Robotomy Request", "abc");
            std::cout << *robo << std::endl;
            Bureaucrat a("a", 150);
            Bureaucrat b("b", 72);
            Bureaucrat c("c", 45);
            a.signForm(*robo);
            a.executeForm(*robo);
            b.signForm(*robo);
            b.executeForm(*robo);
            c.signForm(*robo);
            c.executeForm(*robo);
            std::cout << *robo << std::endl;
            delete robo;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cin >> n;
    {
        try
        {
            std::cout << "\n=====TEST3=====" << std::endl;
            Intern intern;
            AForm *pre = intern.makeForm("Presidential Pardon", "abc");
            std::cout << *pre << "\n" << std::endl;
            Bureaucrat a("a", 150);
            Bureaucrat b("b", 25);
            Bureaucrat c("c", 5);
            std::cout << std::endl;
            a.signForm(*pre);
            a.executeForm(*pre);
            b.signForm(*pre);
            b.executeForm(*pre);
            c.signForm(*pre);
            c.executeForm(*pre);
            std::cout << std::endl;
            std::cout << *pre << std::endl;
            delete pre;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    std::cin >> n;
    {
        try
        {
            std::cout << "\n=====TEST4=====" << std::endl;
            Intern intern;
            AForm *pre = intern.makeForm("asdfsaf", "abc");
            std::cout << *pre << "\n" << std::endl;
            Bureaucrat a("a", 150);
            Bureaucrat b("b", 25);
            Bureaucrat c("c", 5);
            std::cout << std::endl;
            a.signForm(*pre);
            a.executeForm(*pre);
            b.signForm(*pre);
            b.executeForm(*pre);
            c.signForm(*pre);
            c.executeForm(*pre);
            std::cout << std::endl;
            std::cout << *pre << std::endl;
            delete pre;

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

}