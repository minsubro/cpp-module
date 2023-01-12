#include "Converter.hpp"
#include <cmath>
#include <limits.h>

int main(int ac, char **av) {
    if (ac != 2) {
		std::cout << "invaild argument";
		return 0;
	}
	Converter c;

	c.conversion(av[1]);

	// std::cout << b << std::endl;
	// double c = NAN;
	// double d = -INFINITY;
	// std::cout << c << "\n" << d << std::endl;
}