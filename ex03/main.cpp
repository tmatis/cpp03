/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:22:38 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/27 15:23:06 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	{
	ClapTrap	ct("Beloved ClapTrap");
	
	std::cout << ct;
	ct.attack("Ugly enemy");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.setAttackDamage(5);
	ct.attack("Ugly enemy");
	ct.takeDamage(10);
	std::cout << ct;
	}
	{
	ScavTrap	ct("Beloved ScavTrap");

	std::cout << ct;
	ct.guardGate();
	ct.attack("Ugly enemy");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.setAttackDamage(5);
	ct.attack("Ugly enemy");
	ct.takeDamage(10);
	std::cout << ct;
	}
	{
	FragTrap	ct("Beloved ScavTrap");

	std::cout << ct;
	ct.highFiveGuys();
	ct.attack("Ugly enemy");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.attack("Ugly enemy");
	ct.takeDamage(10);
	std::cout << ct;
	}
	{
	DiamondTrap	ct("Beloved");

	std::cout << ct;
	ct.whoAmI();
	ct.highFiveGuys();
	ct.guardGate();
	ct.attack("Ugly enemy");
	ct.takeDamage(5);
	ct.beRepaired(2);
	ct.attack("Ugly enemy");
	ct.takeDamage(10);
	std::cout << ct;
	}
}
