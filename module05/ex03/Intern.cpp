#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern &origin) {
    (void)origin;
}

Intern& Intern::operator=(const Intern &origin) {
    (void)origin;
    return *this;
}

Intern::~Intern() {

}

AForm   *Intern::makeForm(std::string formName, std::string target) {
    std::string formTable[4] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    AForm   *(*createFormTable[4])(std::string) = {
        Intern::makeShrubberyCreationForm,
        Intern::makeRobotomyRequestForm,
        Intern::makePresidentialPardonForm
    };
    for (int i = 0; i < 3; i++) {
        if (formName == formTable[i]) {
            AForm *form = (*createFormTable[i])(target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }
    }
    throw Intern::NonExistentFormException();
}

AForm *Intern::makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

const char *Intern::NonExistentFormException::what() const throw() {
    return "Non-existent From";
}
