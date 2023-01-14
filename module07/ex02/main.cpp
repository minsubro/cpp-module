#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

void    leask() {system("leaks a.out");}

int main(int, char**)
{
    atexit(leask);
    Array<int> numbers(MAX_VAL);
    
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++) {
        std::cout << numbers[i] << std::endl;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
    }
    for (int i = 0; i < MAX_VAL; i++) {
        std::cout << numbers[i] << std::endl;
    }
    Array<char> chars(30);
    for(int i = 0; i<30; i++) {
        chars[i] = 'a';
    }
    for(int i = 0; i<30; i++) {
        std::cout << chars[i] << std::endl;
    }

   
    {
        Array<int> temp2(5);
        Array<int> temp1(5);

        std::cout << temp2.size() << std::endl;

        for (int i = 0; i < 5; i++) {
            temp1[i] = 10;
        }

        temp2 = temp1;

        for (int i = 0; i < 5; i++) {
            std::cout << temp2[i] << std::endl;
        }
        for (int i = 0; i < 5; i++) {
            temp1[i] = 30;
        }
        std::cout << "\n";
        for (int i = 0; i < 5; i++) {
            std::cout << temp2[i] << std::endl;
        }
    }
    
    delete [] mirror;
    return 0;
}