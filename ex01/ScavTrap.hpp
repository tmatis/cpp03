#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
					ScavTrap(const ScavTrap &src);
					ScavTrap (const std::string &name);
					ScavTrap(void);
					~ScavTrap();
		void		guardGate(void);
		ScavTrap	&operator=(const ScavTrap &right);
};

std::ostream		&operator<<(std::ostream &os, const ScavTrap &i);

#endif // [SCAVTRAP_HPP]
