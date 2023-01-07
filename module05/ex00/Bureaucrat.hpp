#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private :
		const std::string name;
		int	grade;
	public : 
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();
		std::string getName();
		int	getGrade();
		void	increaseGrade();
		void	decreaseGrade();

		class GradeTooHighException : public std::exception {
			public :
					const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
					const char *what() const throw();
		};
};

std::ostream& operator << (std::ostream &out, Bureaucrat const &fixed);

#endif