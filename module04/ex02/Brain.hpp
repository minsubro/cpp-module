#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const std::string& set);
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();
		void	BrainSet(const std::string&);
		void	printIdea(int i);
};

#endif