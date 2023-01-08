#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationFrom: public AForm {
	public :
		ShrubberyCreationFrom();
		ShrubberyCreationFrom(std::string _target);
		ShrubberyCreationFrom(const ShrubberyCreationFrom&);
		ShrubberyCreationFrom &operator=(const ShrubberyCreationFrom&);
		~ShrubberyCreationFrom();

		void	execute(Bureaucrat const &executor) const


};

#endif