#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
    private :
        unsigned int max_size;
        std::vector<int> v;
        Span();
    public :
        Span(unsigned int);
        Span(const Span&);
        Span &operator=(const Span&);
        ~Span();

        void addNumber(int value);
        int shortestSpan();
        int longestSpan();

        void print();
};

#endif