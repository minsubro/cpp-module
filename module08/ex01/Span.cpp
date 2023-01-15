# include "Span.hpp"

Span::Span() {
    this->max_size = 0;    
}

Span::Span(unsigned int n) {
    this->max_size = n;
}

Span::Span(const Span &origin) {
    this->max_size = origin.max_size;
}

Span &Span::operator=(const Span& origin) {
    if (this != &origin) {
        this->v.clear();
        std::vector<const int>::iterator it;
        for (it = this->v.begin(); it != origin.v.end(); it++) {
            this->v.push_back(*it);
        }
        this->max_size = origin.max_size;
    }
    return *this;
}

Span::~Span() {}
void    Span::addNumber(int value) {
    if (this->v.size() >= this->max_size) {
        throw std::runtime_error("Array size is insufficient");
    }
    this->v.push_back(value);
}

void    Span::print() {
    for (std::vector<int>::iterator it = this->v.begin(); it != this->v.end(); it++) {
        std::cout << *it << std::endl;
    }
}

int Span::longestSpan() {
    if (this->v.size() < 2) {
        throw std::runtime_error("Not enough arguments.");
    }
    int min = INT_MAX;
    int max = 0;
    for (std::vector<int>::iterator it = this->v.begin(); it != this->v.end(); it++) {
        min = std::min(min, *it);
        max = std::max(max, *it);
    }
    return max - min;
}

int Span::shortestSpan() {
    if (this->v.size() < 2) {
        throw std::runtime_error("Not enough arguments.");
    }
    std::vector<int> tmp = this->v;
    std::sort(tmp.begin(), tmp.end());
    int min = INT_MAX;
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++) {
        for (std::vector<int>::iterator jt = it + 1; jt != tmp.end(); jt++) {
            min = std::min(min, *jt - *it);
        }
    }
    return min;;
}