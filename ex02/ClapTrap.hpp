#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <sys/types.h>


class ClapTrap
{
	protected:
		std::string	_name;
		uint		_hitpoints;
		uint		_energy_points;
		uint		_attack_damage;
	public:
					ClapTrap(const ClapTrap &src);
					ClapTrap(void);
					ClapTrap(std::string name);
					~ClapTrap();

		void		attack(const std::string &target);
		void		takeDamage(uint amount);
		void		beRepaired(uint amount);
		
		void		setAttackDamage(uint amount);
		void		setHitPoints(uint amount);
		void		setEnergyPoints(uint amount);

		uint		getHitpoints(void) const;
		uint		getEnergyPoints(void) const;
		uint		getAttackDamage(void) const;
		std::string	getName(void) const;
		ClapTrap	&operator=(const ClapTrap &right);
};

std::ostream		&operator<<(std::ostream &os, const ClapTrap &i);

#endif // [CLAPTRAP_HPP]
