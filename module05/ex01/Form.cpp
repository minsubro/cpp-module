#include "Form.hpp"

Form::Form(std::string _name, int _signGrade, int _executeGrade):
	name(_name),
	signGrade(_signGrade),
	executeGrade(_executeGrade)
	{
	if (this->signGrade < 1 || this->executeGrade < 1) {
		throw Form::GradeTooHighException();
	}
	else if (this->signGrade > 150 || this->executeGrade > 150) {
		throw Form::GradeTooLowException();
	}
	this->isSigned = false;
}

Form::Form(const Form &origin): 
	name(origin.name),
	signGrade(origin.signGrade),
	executeGrade(origin.executeGrade) 
	{
	this->isSigned = origin.isSigned;
}

Form	&Form::operator=(const Form &origin) {
	if (this != &origin){
		this->isSigned = origin.isSigned;
	}
	return *this;
}

Form::~Form() {

}

std::string Form::getName() const {
	return this->name;
}

int	Form::getSignGrade() const {
	return this->signGrade;
}

int Form::getExecuteGrade() const {
	return this->executeGrade;
}

std::string Form::getisSignd() const {
	if (this->isSigned) {
		return "True";
	}
	else {
		return "False";
	}
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (this->signGrade < bureaucrat.getGrade()) {
		throw Form::GradeTooLowException();
	}
	else {
		this->isSigned = true;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	std::cout << "Form name: " << form.getName()
		<< 	"\nisSigned: " << form.getisSignd()
		<< "\nsignGrade: " << form.getSignGrade()
		<< "\nexecuteGrade: " << form.getExecuteGrade();
	return out;
}


