#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <sstream>

class PmergeMe {
	private :
		
	public :
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);
		~PmergeMe();
		
		static void mergeInsertionSort(int, char **);

		class Error: public std::exception {
			const char * what() const throw();
		};
};

#endif