#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", "Default", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm", _target, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin): AForm(origin.getName(), origin.getTarget(), origin.getSignGrade(), origin.getExecuteGrade()) {

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin) {
	(void)origin;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecuteGrade()) {
		throw ShrubberyCreationForm::GradeTooLowException();
	}
	else {
		std::string filename = this->getTarget() + "_shrubbery";
		std::ofstream f(filename);
		f << 	"               ,@@@@@@@,\n"
				"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
				"       |o|        | |         | |\n"
				"       |.|        | |         | |\n"
				"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
		f.close();
	}
}
