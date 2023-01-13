#include <iostream>

using namespace std;

int main() {
    int *a = new int();

    cout << *a << std::endl;
    int i = 0;
    while (1)
    {
        try {
            std::cout << a[i] << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << "\n";
        }
        std::cout << i << std::endl;
        i++;
    }
}