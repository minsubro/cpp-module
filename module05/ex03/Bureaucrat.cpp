#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& origin): name(origin.name), grade(origin.grade) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& origin) {
	this->grade = origin.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {

}

int Bureaucrat::getGrade() const {
	return this->grade;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

void	Bureaucrat::increaseGrade() {
	if (this->grade == 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade--;
}

void	Bureaucrat::decreaseGrade() {
	if (this->grade == 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade++;
}

void	Bureaucrat::signForm(AForm &form) {
	if (form.getisSignd() == "True") {
		std::cout << this->getName() << " couldn’t sign " 
			<< form.getName() << " because Already signed." << std::endl;
	}
	else {
		try
		{
			form.beSigned(*this);
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << this->getName() << " couldn’t sign " 
				<< form.getName() << " because Grade Too Low." << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	if (form.getisSignd() == "False") {
		std::cout << this->getName() << " couldn’t execute " 
			<< form.getName() << " because It hasn't been signed yet.." << std::endl;
	}
	else {
		try
		{
			form.execute(*this);
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->getName() << " couldn’t execute " 
				<< form.getName() << " because Grade Too Low." << std::endl;
		}
		
	}
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}







