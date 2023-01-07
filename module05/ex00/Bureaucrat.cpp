#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bure

Bureaucrat::~Bureaucrat() {

}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}







