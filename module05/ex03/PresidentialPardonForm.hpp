#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
    private :
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm&);
        ~PresidentialPardonForm();

        void	execute(Bureaucrat const &executor) const;

};

#endif