#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), weapon(NULL)
{}

HumanB::~HumanB(void){}

void HumanB::attack(void) const
{
	if (this->weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}