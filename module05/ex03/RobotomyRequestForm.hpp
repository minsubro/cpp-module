#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm {
    private :
        RobotomyRequestForm& operator=(const RobotomyRequestForm &);
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        ~RobotomyRequestForm();

        void	execute(Bureaucrat const &executor) const;
};

#endif