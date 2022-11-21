#ifndef MYSTD_HPP
# define MYSTD_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class mystd {
	public :
		static void replace(std::string filename, std::string s1, std::string s2);
};

#endif