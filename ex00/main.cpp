/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:22:38 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/25 19:54:38 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
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
