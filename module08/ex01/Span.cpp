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
    return *(std::max_element(this->v.begin(), this->v.end())) - *(std::min_element(this->v.begin(), this->v.end())); 
}

int Span::shortestSpan() {
    if (this->v.size() < 2) {
        throw std::runtime_error("Not enough arguments.");
    }
    std::vector<int> tmp = this->v;
    std::sort(tmp.begin(), tmp.end());
    int min = INT_MAX;
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++) {
        min = std::min(min, *(it + 1) - *it);
    }
    return min;;
}

void Span::expandInSize() {
    if (this->v.size() * 2 > this->max_size) {
        throw std::runtime_error("Array size is insufficient");
    }
    this->v.insert(v.end(), v.begin(), v.end());
}

size_t Span::getCurrentSize() {
    return this->v.size();
}

size_t Span::getMaxsize() {
    return this->max_size;
}