#include "mystd.hpp"

void	mystd::replace(std::string filename, std::string s1, std::string s2) {
	std::ifstream infile(filename, std::ios_base::in);
	if (!infile.is_open()) {
		std::cout << "Failed to open for infile...." << std::endl;
		return ;
	}	
	std::ofstream outfile(filename + ".reaplce");
	std::string file;
	while (getline(infile, file))
	{
		int idx;
		while (1)
		{
			idx = file.find(s1);
			if (idx == -1)
				break;
			file = file.substr(0, idx) + s2 + file.substr(idx + s1.size(), file.size());
		}
		outfile << file << std::endl;
	}
	
}