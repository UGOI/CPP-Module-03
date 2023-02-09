#include"./include/ClapTrap.hpp"
#include<iostream>

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "ClapTrap " << this->name << " created" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destroyed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy to attack" << std::endl;
		return ;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	setenergyPoints(this->energyPoints - 1);
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= amount)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		sethitPoints(0);
		return ;
	}
	sethitPoints(this->hitPoints - amount);
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy to repair" << std::endl;
		return ;
	}
	sethitPoints(this->hitPoints + amount);
	setenergyPoints(this->energyPoints - 1);
	std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
}

void ClapTrap::sethitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setenergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setattackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}
