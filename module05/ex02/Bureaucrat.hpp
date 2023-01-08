#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class AForm;

class Bureaucrat {
	private :
		const std::string name;
		int	grade;
		Bureaucrat& operator=(const Bureaucrat&);
	public : 
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();
		std::string getName() const;
		int	getGrade() const;
		void	increaseGrade();
		void	decreaseGrade();
		void	signForm(AForm &);
		void	executeForm(AForm const & form);

		class GradeTooHighException : public std::exception {
			public :
					const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
					const char *what() const throw();
		};
};

std::ostream& operator << (std::ostream &out, Bureaucrat const &bureaucrat);

#endif