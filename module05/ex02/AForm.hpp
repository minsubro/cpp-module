#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm {
	private :
		const std::string name;
		const std::string target;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
		AForm &operator=(const AForm &);

	public :
		AForm(
			std::string _name,
			std::string _target,
			int _signGrade,
			int _executeGrade
		);
		AForm(const AForm&);
		virtual ~AForm();

		std::string getTarget() const;
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		std::string getisSignd() const;

		void	beSigned(const Bureaucrat&);
		virtual	void	execute(Bureaucrat const &executor) const =0;

		class GradeTooHighException: public std::exception {
			public :
				const char	*what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public :
				const char	*what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const AForm &Aform);

#endif