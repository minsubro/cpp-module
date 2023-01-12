#include "iter.hpp"

int main()
{
	int arr[10] = {0,};
	char str[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k'};

	::iter(arr, 10, ::printArr);
	::iter(arr, 10, ::setArr);
	::iter(arr, 10, ::printArr);
	::iter(str, 10, ::printArr);
	::iter(str, 10, ::setArr);
	::iter(str, 10, ::printArr);
}