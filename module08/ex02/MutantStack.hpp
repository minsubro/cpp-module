#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <deque>
#include <list>

template <class T, class Container = std::deque<T> > class MutantStack;

template <typename T, typename Container>
class MutantStack : public std::stack<T, Container> {
	private :
		
	public :
		MutantStack() {

		}

		MutantStack(const MutantStack &origin) {
			*this = origin;
		}

		MutantStack &operator=(const MutantStack &origin) {
			if (this != &origin)
				std::stack<T, Container>::operator=(origin);
			return *this;
		}

		~MutantStack() {};

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;
		
		
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
		const_iterator cbegin() {
			return this->c.cbegin();
		}
		const_iterator cend() {
			return this->c.cend();
		}
		const_reverse_iterator crbegin() {
			return this->c.crbegin();
		}
		const_reverse_iterator crend() {
			return this->c.crend();
		}

		void	push_back(const int& val) {
			this->c.push_back(val);
		}

		void	pop_back() {
			this->c.pop_back();
		}

		int &back() {
			return this->c.back();
		}
		


};

#endif