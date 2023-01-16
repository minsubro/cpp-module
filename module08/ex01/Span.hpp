#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

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

        void expandInSize();
            
        size_t getMaxsize();
        size_t getCurrentSize();


        void print();
};

#endif