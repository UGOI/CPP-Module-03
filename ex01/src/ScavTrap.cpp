#include "./include/ScavTrap.hpp"
#include "./include/ClapTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "ScavTrap " << this->name  << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name  << " destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name  << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "Scavtrap " << this->name << " has no energy to attack" << std::endl;
		return ;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "Scavtrap " << this->name << " is dead" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "Scavtrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! Hello LOL." << std::endl;
}
