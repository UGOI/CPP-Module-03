#include "./include/FragTrap.hpp"
#include "./include/ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap " << this->name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "FragTrap " << this->name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "FragTrap " << this->name  << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name  << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " has no energy to attack" << std::endl;
		return ;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! Hello I AM FRAGGY." << std::endl;
}
