#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	private :
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
		Form &operator=(const Form &);

	public :
		Form(
			std::string _name,
			int _signGrade,
			int _executeGrade
		);
		Form(const Form&);
		~Form();

		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		std::string getisSignd() const;

		void	beSigned(const Bureaucrat&);

		class GradeTooHighException: public std::exception {
			public :
				const char	*what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public :
				const char	*what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif