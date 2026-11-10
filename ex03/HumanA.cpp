#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &new_weapon) : _name(name), weapon(new_weapon)
{}

HumanA::~HumanA(void){}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}