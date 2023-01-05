#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain	*brain;
	public :
		Cat();
		Cat(const Cat&);
		Cat(const Brain&);
		Cat& operator=(const Cat&);
		~Cat();
		void	makeSound() const;
		void	printBrain();
		void	setBrain(std::string);

};

#endif