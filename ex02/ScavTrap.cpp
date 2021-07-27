#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Default constructor" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor with name" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor" << std::endl;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

ScavTrap	&ScavTrap::operator=(const ScavTrap &right)
{
	this->_attack_damage = right._attack_damage;
	this->_energy_points = right._energy_points;
	this->_hitpoints = right._hitpoints;
	this->_name = right._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const ScavTrap &i)
{
	os	<< "ScavTrap infos:" << std::endl
		<< "Name: " << i.getName() << std::endl
		<< "Hitpoints: " << i.getHitpoints() << std::endl
		<< "Energy points: " << i.getEnergyPoints() << std::endl
		<< "Attack damage: " << i.getAttackDamage() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap "
				<< this->_name << " is GUARDING THE GATE!"
				<< std::endl;
}

void	ScavTrap::setEnergy(void)
{
	this->_energy_points = 50;
}

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */


