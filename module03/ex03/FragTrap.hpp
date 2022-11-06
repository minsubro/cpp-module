#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public :
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& origin);
		FragTrap& operator=(const FragTrap& origin);
		~FragTrap();
		void highFivesGuys(void);
		void	attack(const std::string& name);
};

#endif