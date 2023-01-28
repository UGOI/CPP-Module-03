#include "./include/ScavTrap.hpp"
#include "./include/ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << getName() << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
}