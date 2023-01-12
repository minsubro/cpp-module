#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& s1, T& s2) {
	T temp;
	temp = s1;
	s1 = s2;
	s2 = temp;
}

template <typename T>
T	min(T s1, T s2) {
	return s1 > s2 ? s2 : s1; 
}

template <typename T>
T	max(T s1, T s2) {
	return s1 <= s2 ? s2 : s1; 
}

#endif