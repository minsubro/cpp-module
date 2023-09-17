#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <stack>

const std::string set[] = {"+", "-", "/", "*"};

enum Type {
	SUM,
	SUB,
	DIV,
	MUL,
	NONE,
};

class RPN {
	private :

	public :
		RPN();
		RPN(const RPN &);
		RPN	&operator=(const RPN &);
		~RPN();

		static void calculate(std::string);

		class Error: public std::exception {
			const char * what() const throw();
		};

};

#endif