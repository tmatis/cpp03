#include "FragTrap.hpp"

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

FragTrap::FragTrap(void)
{
	std::cout << "ScavTrap Default constructor" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor with name" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor" << std::endl;
}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

FragTrap	&FragTrap::operator=(const FragTrap &right)
{
	this->_attack_damage = right._attack_damage;
	this->_energy_points = right._energy_points;
	this->_hitpoints = right._hitpoints;
	this->_name = right._name;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const FragTrap &i)
{
		os	<< "FragTrap infos:" << std::endl
		<< "Name: " << i.ClapTrap::getName() << std::endl
		<< "Hitpoints: " << i.getHitpoints() << std::endl
		<< "Energy points: " << i.getEnergyPoints() << std::endl
		<< "Attack damage: " << i.getAttackDamage() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	FragTrap::highFiveGuys(void)
{
	std::cout << "High five request: Accepted" << std::endl;
}

void	FragTrap::setAttackDamage(void)
{
	this->_attack_damage = 30;
}

void	FragTrap::setHitPoints(void)
{
	this->_hitpoints = 100;
}
/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */


