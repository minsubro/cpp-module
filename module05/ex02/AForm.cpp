#include "AForm.hpp"

AForm::AForm(std::string _name, std::string _target , int _signGrade, int _executeGrade):
	name(_name),
	target(_target),
	signGrade(_signGrade),
	executeGrade(_executeGrade)
	{
	if (this->signGrade < 1 || this->executeGrade < 1) {
		throw AForm::GradeTooHighException();
	}
	else if (this->signGrade > 150 || this->executeGrade > 150) {
		throw AForm::GradeTooLowException();
	}
	this->isSigned = false;
}

AForm::AForm(const AForm &origin): 
	name(origin.name),
	signGrade(origin.signGrade),
	executeGrade(origin.executeGrade) 
	{
	this->isSigned = origin.isSigned;
}

AForm	&AForm::operator=(const AForm &origin) {
	if (this != &origin){
		this->isSigned = origin.isSigned;
	}
	return *this;
}

AForm::~AForm() {

}

std::string AForm::getName() const {
	return this->name;
}

std::string AForm::getTarget() const {
	return this->target;
}

int	AForm::getSignGrade() const {
	return this->signGrade;
}

int AForm::getExecuteGrade() const {
	return this->executeGrade;
}

std::string AForm::getisSignd() const {
	if (this->isSigned) {
		return "True";
	}
	else {
		return "False";
	}
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (this->signGrade < bureaucrat.getGrade()) {
		throw AForm::GradeTooLowException();
	}
	else {
		this->isSigned = true;
	}
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

std::ostream& operator<<(std::ostream &out, const AForm &form) {
	std::cout << "AForm name: " << form.getName()
		<< 	"\nisSigned: " << form.getisSignd()
		<< "\nsignGrade: " << form.getSignGrade()
		<< "\nexecuteGrade: " << form.getExecuteGrade();
	return out;
}


