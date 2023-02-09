#include "./include/ScavTrap.hpp"
#include "./include/ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	sethitPoints(100);
	setenergyPoints(50);
	setattackDamage(20);
	std::cout << "ScavTrap " << getname() << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap " << getname() << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getname() << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getname() << " has entered in Gate keeper mode" << std::endl;
}
