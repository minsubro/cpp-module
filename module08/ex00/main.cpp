#include "easyfind.hpp"
#include <algorithm>

int main() 
{
    {
        std::vector<int> a;
        
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);

        std::cout << "a size = " << a.size() << std::endl;
        easyprint(a);
        std::vector<int>::iterator it;
        try
        {
            it = ::easyfind(a, 1);
            std::cout << "find idx = " << it - a.begin() << std::endl;
            std::cout << "find value = " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "\n" << std::endl;
    {
        std::list<int> a;
        
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);


        std::cout << "a size = " << a.size() << std::endl;
        easyprint(a);
        std::list<int>::iterator it;
        try
        {
            it = ::easyfind(a, 4);
            std::cout << "find value = " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "\n" << std::endl;
    {
        std::deque<int> a;
        
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);


        std::cout << "a size = " << a.size() << std::endl;
        easyprint(a);
        std::deque<int>::iterator it;
        try
        {
            it = ::easyfind(a, 100);
            std::cout << "find idx = " << it - a.begin() << std::endl;
            std::cout << "find value = " << *it << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}