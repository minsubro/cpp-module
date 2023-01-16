#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	private :
		
	public :
		MutantStack() {

		}

		MutantStack(const MutantStack &origin) {
			*this = origin;
		}

		MutantStack &operator=(const MutantStack &origin) {
			if (this != &origin)
				std::stack<T>::operator=(origin);
			return *this;
		}

		~MutantStack() {std::cout << "나죽엉" << std::endl;};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator	begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
		reverse_iterator rbegin() {
			return this->c.rbegin();
		}

		reverse_iterator rend() {
			return this->c.rend();
		}

};

#endif