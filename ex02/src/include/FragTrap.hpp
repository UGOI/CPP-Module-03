#pragma once
#include <iostream>
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	void highFivesGuys();
	void attack(std::string const &target);
};
