#include <iostream>
#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"
#include "./include/FragTrap.hpp"

int main()
{
	FragTrap fragTrap("FragTrap");
	fragTrap.attack("target");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(10);
	fragTrap.highFivesGuys();
	return (0);
}