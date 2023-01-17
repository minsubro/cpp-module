#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);
		{
			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite)
			{
			std::cout << *it << std::endl;
			++it;
			}
		}

		{
			std::cout << "=====iterator print=====" << std::endl;
			for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
				std::cout << *it << std::endl;
			}
			std::cout << "=====reverse_iterator print=====" << std::endl;
			for (MutantStack<int>::const_reverse_iterator rit = mstack.crbegin(); rit != mstack.crend(); rit++) {
				std::cout << *rit << std::endl;
			}
		}

		std::stack<int> s(mstack);
	}

	std::cout << "=======================================\n";
	
	{
		MutantStack<int, std::list<int> > mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);

		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}

	}

	return 0;
}