#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *arr, size_t size, void (*fn)(T&)) {
	for (size_t i = 0; i < size; i++) {
		fn(arr[i]);
	}
}

template<typename T>
void	setArr(T& a) {
	a = 42;
}

template<typename T>
void printArr(T& a) {
	std::cout << a << std::endl;
}

#endif