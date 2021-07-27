/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 11:29:31 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/26 21:11:14 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

ClapTrap::ClapTrap(void)
	: _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << name << " Constructor with parameter" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor" << std::endl;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

ClapTrap	&ClapTrap::operator=(const ClapTrap &right)
{
	this->_name = right.getName();
	this->_hitpoints = right.getHitpoints();
	this->_attack_damage = right.getAttackDamage();
	this->_energy_points = right.getEnergyPoints();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const ClapTrap &i)
{
	os	<< "ClapTrap infos:" << std::endl
		<< "Name: " << i.getName() << std::endl
		<< "Hitpoints: " << i.getHitpoints() << std::endl
		<< "Energy points: " << i.getEnergyPoints() << std::endl
		<< "Attack damage: " << i.getAttackDamage() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0)
	{
		std::cout	<< "ClapTrap " << this->_name
					<< " attacks " << target
					<< ", causing " << this->_attack_damage
					<< " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
	{
		std::cout	<< "ClapTrap " << this->_name
					<< " has no energy left to attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(uint amount)
{
	std::cout 	<< "ClapTrap " << this->_name
				<< " takes " << amount
				<< " points of damage!" << std::endl;
	if (amount >= this->_hitpoints)
	{
		std::cout	<< "ClapTrap " << this->_name
					<< " is dead!" << std::endl;
		this->_hitpoints = 0;
	}
	else
		this->_hitpoints -= amount;
}

void	ClapTrap::beRepaired(uint amount)
{
	std::cout	<< "ClapTrap " << this->_name
				<< " is repaired for " << amount
				<< std::endl;
	this->_hitpoints += amount;
}

uint	ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

uint	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

uint	ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setEnergyPoints(uint amount)
{
	std::cout 	<< "ClapTrap " << this->_name
				<< " has now " << amount
				<< " energy points" << std::endl;
	this->_energy_points = amount;
}

void	ClapTrap::setAttackDamage(uint amount)
{
	std::cout 	<< "ClapTrap " << this->_name
				<< " has now " << amount
				<< " attack damage" << std::endl;
	this->_attack_damage = amount;
}

void	ClapTrap::setHitPoints(uint amount)
{
	std::cout 	<< "ClapTrap " << this->_name
				<< " has now " << amount
				<< " hit points" << std::endl;
	this->_hitpoints = amount;
}
