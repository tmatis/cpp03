#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
					FragTrap (const std::string &name);
					FragTrap(const FragTrap &src);
					FragTrap(void);
					~FragTrap();
		void		highFiveGuys(void);
		
		FragTrap	&operator=(const FragTrap &right);
};

std::ostream		&operator<<(std::ostream &os, const FragTrap &i);

#endif // [FRAGTRAP_HPP]
