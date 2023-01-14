#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array {
    private :
        T *arr;
        unsigned int _size;

    public :
        Array() {
            this->arr = new T;
            this->_size = 1;
        }
        Array(unsigned int n) {
            this->arr = new T[n];
            this->_size = n;
        }
        Array(const Array &origin) {
            this->arr = new T[origin._size];
            this->_size = origin._size;
        }
        Array &operator=(const Array &origin) {
            if (this != &origin) {
                delete this->arr;
                this->arr = new T[origin._size];
                this->_size = origin._size;
                for (unsigned int i = 0; i < this->_size; i++) {
                    this->arr[i] = origin.arr[i];
                }
            }
            return *this;
        }
        ~Array() {
            delete this->arr;
        }
        T& operator[] (unsigned int n) const {
            if (this->_size <= n) {
                throw std::out_of_range("out_of_range");
            }
            return this->arr[n];
        }
        unsigned int size() {
            return this->_size;
        }

};

#endif