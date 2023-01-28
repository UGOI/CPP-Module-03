#include <iostream>
#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap("ScavTrap");
	scavTrap.attack("target");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();
	return (0);
}