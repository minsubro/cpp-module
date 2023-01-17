#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T>
typename T::iterator easyfind(T& container, int find) {
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), find);
    if (it == container.end())
        throw std::range_error("not found exception");
    else
        return it;
}

template <typename T>
void easyprint(T& container) {
    typename T::iterator it;
    for (it = container.begin(); it != container.end(); it++) {
        std::cout << *it << std::endl;
    }
}

#endif