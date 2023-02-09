#include <iostream>
#include "./include/ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("ClapTrap");
	clapTrap.attack("Target");
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(4);
	clapTrap.beRepaired(5);
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(1);
	clapTrap.beRepaired(10);
	return (0);
}
