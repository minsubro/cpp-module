#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
    public :
        Intern();
        Intern(const Intern&);
        Intern& operator=(const Intern&);
        ~Intern();

        AForm *makeForm(std::string formName, std::string target);

        static AForm *makePresidentialPardonForm(std::string);
        static AForm *makeRobotomyRequestForm(std::string);
        static AForm *makeShrubberyCreationForm(std::string);

        class NonExistentFormException: public std::exception {
            const char *what() const throw();
        };

    private :
};

#endif