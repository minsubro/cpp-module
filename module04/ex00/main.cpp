#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n<<=================================>>\n\n" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << std::endl;

	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongAnimal->getType() << std::endl;

	std::cout << std::endl;

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}