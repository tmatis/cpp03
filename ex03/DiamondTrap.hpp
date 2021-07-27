#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap :public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
					DiamondTrap(const DiamondTrap &src);
					DiamondTrap(const std::string &name);
					DiamondTrap(void);
					~DiamondTrap();
		using 		ScavTrap::attack;
		DiamondTrap	&operator=(const DiamondTrap &right);
		void		whoAmI(void) const;
		std::string	getName(void) const;
		std::string	getClapName(void) const;
};

std::ostream		&operator<<(std::ostream &os, const DiamondTrap &i);

#endif // [DIAMONDTRAP_HPP]
