#pragma once
#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	void guardGate();
	void attack(std::string const &target);
};
