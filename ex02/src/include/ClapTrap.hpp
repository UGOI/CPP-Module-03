#pragma once
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	virtual ~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void sethitPoints(unsigned int hitPoints);
	void setenergyPoints(unsigned int energyPoints);
	void setattackDamage(unsigned int attackDamage);
	void setname(std::string name);
	unsigned int gethitPoints();
	unsigned int getenergyPoints();
	unsigned int getattackDamage();
	std::string getname();
};
