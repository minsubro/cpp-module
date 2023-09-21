#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &origin) {
	(void)origin;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &origin) {
	(void)origin;
	return (*this);
}

PmergeMe::~PmergeMe() {}

static int tokenCheck(std::string token) {
	double	ret;
	char	*endPtr = nullptr;
	for (size_t i = 0; i < token.size(); i++)
	{
		if (!isdigit(token[i]))
			throw PmergeMe::Error();
	}
	ret = std::strtod(token.c_str(), &endPtr);
	if (ret > INT32_MAX || ret < 0)
		throw PmergeMe::Error();
	return (static_cast<int>(ret));
}

void	initContainer(std::vector<int> &v, std::list<int> &li, int ac, char **av) {
	int 	i = 1;
	double	ret;

	while (i < ac)
	{
		ret = tokenCheck(av[i]);
		v.push_back(ret);
		li.push_back(ret);
		i++;
	}
}

void	mergeVector(std::vector<int> &v, int left, int middle, int right) {
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::vector<int> leftVector(n1);
	std::vector<int> rightVector(n2);

	for (int i = 0; i < n1; i++)
	{
		leftVector[i] = v[left + i];
	}
	for (int i = 0; i < n2; i++)
	{
		rightVector[i] = v[middle + 1 + i];
	}

	int i = 0;
	int j = 0;
	int k = left;
	
	while (i < n1 && j < n2) {
		if (leftVector[i] <= rightVector[j]) {
			v[k] = leftVector[i];
			i++;
		}
		else {
			v[k] = rightVector[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
        v[k] = leftVector[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = rightVector[j];
        j++;
        k++;
    }
}

void	mergeInsertionSortVector(std::vector<int> &v, int left, int right, int k)
{
	if (right - left + 1 <= k) {
		for (int i = left + 1; i <= right; i++)
		{
			int value = v[i];
			int j = i - 1;
			while (j >= left && v[j] > value)
			{
				v[j + 1] = v[j];
				j--;
			}
			v[j + 1] = value;
		}
	}
	else {
		int middle = left + (right - left) / 2;
		mergeInsertionSortVector(v, left, middle, k);
		mergeInsertionSortVector(v, middle + 1, right, k);
		mergeVector(v, left, middle, right);
	}
}

void	printVector(std::vector<int> &v) {
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << "\n";
}

void	printList(std::list<int> &list) {
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
	
}

void	insertionSortList(std::list<int> &li) {
	 std::list<int>::iterator current = li.begin();
    ++current;

    while (current != li.end()) {
        std::list<int>::iterator prev = current;
        --prev;
        int key = *current;
        while (prev != li.end() && *prev > key) {
            std::list<int>::iterator next = prev;
            ++next;
            *next = *prev;
            --prev;
        }
        std::list<int>::iterator next = prev;
        ++next;
        *next = key;
        ++current;
    }
}

std::list<int>	mergeList(std::list<int> &left, std::list<int> &right) {
	std::list<int> result;

	std::list<int>::iterator leftIt = left.begin();
	std::list<int>::iterator rightIt = right.begin();

	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt <= *rightIt) {
			result.push_back(*leftIt);
			++leftIt;
		}
		else {
			result.push_back(*rightIt);
			++rightIt;
		}
	}

	result.insert(result.end(), leftIt, left.end());
	result.insert(result.end(), rightIt, right.end());

	return (result);
	
}

std::list<int>	mergeInsertionSortList(std::list<int> &li, int k) {
	if ((int)li.size() <= k) {
		insertionSortList(li);
		return (li);
	}
	std::list<int>::iterator middleIt = li.begin();
	std::advance(middleIt, li.size() / 2 + 1);
	
	std::list<int> leftList(li.begin(), middleIt);
	std::list<int> rightList(middleIt, li.end());

	leftList = mergeInsertionSortList(leftList, k);
	rightList = mergeInsertionSortList(rightList, k);

	return (mergeList(leftList, rightList));

}

void	PmergeMe::mergeInsertionSort(int ac, char **av)
{
	std::vector<int>	v;
	std::list<int>		li;
	clock_t				startTime;
	clock_t				endTime;

	try
	{
		initContainer(v, li, ac, av);
		std::cout << "Before: ";
		printVector(v);
		startTime = clock();
		mergeInsertionSortVector(v, 0, v.size() - 1, 5);
		endTime = clock();
		std::cout << "After: ";
		printVector(v);
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << endTime - startTime << "ms" << std::endl;
		startTime = clock();
		li = mergeInsertionSortList(li, 5);
		endTime = clock();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::list : " << endTime - startTime << "ms" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char *PmergeMe::Error::what() const throw() {
	return "Error";
}



