#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &origin) {
	(void)origin;
}

RPN &RPN::operator=(const RPN & origin) {
	(void)origin;
	return (*this);
}

RPN::~RPN() {}

static bool isOperator(std::string &token) {
	for(int i = 0; i < 4; i++) {
		if (token.compare(set[i]) == 0)
			return (true);
	}
	return (false);
}

Type getType(std::string &token) {
	for(int i = 0; i < 4; i++) {
		if (token.compare(set[i]) == 0)
			return (static_cast<Type>(i));
	}
	return (NONE);
}

void	calculation(std::stack<double> &stack, std::string token) {
	if (stack.size() < 2)
		throw RPN::Error();
	Type tokenType = getType(token);
	double value1, value2, ret;
	value1 = stack.top();
	stack.pop();
	value2 = stack.top();
	stack.pop();
	switch (tokenType)
	{
		case (SUM):
			ret = value2 + value1;
			break;
		case (SUB):
			ret = value2 - value1;
			break;
		case (DIV):
			ret = value2 / value1;
			break;
		case (MUL):
			ret = value2 * value1;
			break;
		case (NONE):
			throw RPN::Error();
	}
	stack.push(ret);
}

double translateValue(std::string str) {
	char *endPtr = NULL;
	double ret = std::strtod(str.c_str(), &endPtr);
	if (endPtr != nullptr && *endPtr != 0) {
		throw RPN::Error();
	}
	if (ret < 1 || ret > 9) {
		throw RPN::Error();
	}
	return (ret);
}

void	RPN::calculate(std::string str) {
	std::stack<double>	stack;
	std::stringstream ss(str);
	std::string token;

	try
	{
		while (ss >> token)
		{
			if (isOperator(token)) {
				calculation(stack, token);
			}
			else {
				stack.push(translateValue(token));
			}
		}

		if (stack.size() > 1)
			throw Error();
		else
			std::cout << stack.top();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// exception
const char *RPN::Error::what() const throw() {
	return "Error";
}

