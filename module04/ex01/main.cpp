#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//void leaks() { system("leaks a.out"); }

int main()
{
	//atexit(leaks);
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << std::endl;

		delete j;
		delete i;

		std::cout << std::endl;
	}


	const Animal *animal[10];
	
	std::cout << "==========할당==========" << std::endl;
	for(int i = 0; i<10; i++) {
		if (i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "==========타입출력==========" << std::endl;
	for(int i = 0; i<10; i++) {
		std::cout << animal[i]->getType() << std::endl;
	}
	std::cout << "==========소멸==========" << std::endl;
	for(int i = 0; i<10; i++) {
		delete animal[i];
	}

	{
		Cat *cat = new Cat();
		cat->setBrain("abc");
		Cat cat2(*cat);
		delete cat;
		cat2.printBrain();
		cat2.setBrain("cba");
	}

	Brain *brain = new Brain("abc");
	Cat cat(*brain);
	delete brain;
	cat.printBrain();
	cat.setBrain("dog?");
	cat.printBrain();

	return 0;
}