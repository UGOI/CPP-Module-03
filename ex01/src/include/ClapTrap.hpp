#pragma once
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string name);
	std::string getName();
	void setHitPoints(int hitPoints);
	int getHitPoints();
	void setEnergyPoints(int energyPoints);
	int getEnergyPoints();
	void setAttackDamage(int attackDamage);
	int getAttackDamage();
};