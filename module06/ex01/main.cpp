#include <iostream>
#include "Data.hpp"

uintptr_t   serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data temp = Data();
    temp.a = 42;
    std::cout << "temp ptr = " << &temp << std::endl;
    Data *data_ptr;
    uintptr_t int_ptr;
    int_ptr = serialize(&temp);
    std::cout << "int_ptr = " << int_ptr << std::endl;
    data_ptr = deserialize(int_ptr);
    std::cout << "data_ptr = " << data_ptr << std::endl;
    std::cout << data_ptr->a << std::endl;
}