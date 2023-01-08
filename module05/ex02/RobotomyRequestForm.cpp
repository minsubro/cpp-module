#include "RobotomyRequestForm.hpp"
#include "stdlib.h"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", "Default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", _target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& origin): AForm(origin.getName(), origin.getTarget(), origin.getSignGrade(), origin.getExecuteGrade()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& origin) {
    (void)origin;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getExecuteGrade()) {
		throw RobotomyRequestForm::GradeTooLowException();
	}
    else {
        std::cout << "drill....drill...." << std::endl;
        srand(time(NULL));
        int random = rand() % 2;
        if (random) {
            std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
        } 
        else {
            std::cout << this->getTarget() << " has been robotomized failure" << std::endl;
        }
    }
}


