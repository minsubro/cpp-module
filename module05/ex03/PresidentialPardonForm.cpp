#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", "Default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm", _target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& origin): AForm(origin.getName(), origin.getTarget(), origin.getSignGrade(), origin.getExecuteGrade()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& origin) {
    (void)origin;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getExecuteGrade()) {
		throw PresidentialPardonForm::GradeTooLowException();
	}
    else {
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}