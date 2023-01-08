#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationFrom::ShrubberyCreationFrom(): AForm("ShrubberyCreationFrom", "Default", 145, 137) { }

ShrubberyCreationFrom::ShrubberyCreationFrom(std::string _target): AForm("ShrubberyCreationFrom", _target, 145, 137) {

}

ShrubberyCreationFrom::ShrubberyCreationFrom(const ShrubberyCreationFrom& origin): AForm(origin.getName(), origin.getTarget(), origin.getSignGrade(), origin.getExecuteGrade()) {

}

ShrubberyCreationFrom &ShrubberyCreationFrom::operator=(const ShrubberyCreationFrom &origin) {
	return *this;
}

void	ShrubberyCreationFrom::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecuteGrade()) {
		throw ShrubberyCreationFrom::GradeTooLowException();
	}
	else {
		std::string filename = this->getTarget() + "_shrubbery";
		std::ofstream f()
	}
}
