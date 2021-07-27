#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap created" << std::endl;
	this->ScavTrap::setEnergy();
	this->FragTrap::setAttackDamage();
	this->FragTrap::setHitPoints();
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "DiamondTrap created" << std::endl;
	this->ScavTrap::setEnergy();
	this->FragTrap::setAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy created" << std::endl;

	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destroyed" << std::endl;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &right)
{
	this->_attack_damage = right._attack_damage;
	this->_energy_points = right._energy_points;
	this->_hitpoints = right._hitpoints;
	this->ClapTrap::_name = right.ClapTrap::_name;
	this->_name = right._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const DiamondTrap &i)
{
	os	<< "ScavTrap infos:" << std::endl
		<< "ClapName: " << i.ClapTrap::getName() << std::endl
		<< "Name: " << i.DiamondTrap::getName() << std::endl
		<< "Hitpoints: " << i.getHitpoints() << std::endl
		<< "Energy points: " << i.getEnergyPoints() << std::endl
		<< "Attack damage: " << i.getAttackDamage() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void 	DiamondTrap::whoAmI(void) const
{
	std::cout 	<< "I am a DiamondTrap "
				<< "my name is " << this->DiamondTrap::getName()
				<< " my ClapTrap name is: " << this->ClapTrap::getName()
				<< std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->DiamondTrap::_name);
}

std::string	DiamondTrap::getClapName(void) const
{
	return (this->ClapTrap::getName());
}

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */


