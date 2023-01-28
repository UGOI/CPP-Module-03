#pragma once
#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	void guardGate();
};
