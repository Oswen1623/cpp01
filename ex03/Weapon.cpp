#include "Weapon.hpp"

Weapon::Weapon(void){}

Weapon::Weapon(std::string weapon)
{
	this->setType(weapon);
}

Weapon::~Weapon(void){}

void Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}

const std::string &Weapon::getType(void) const
{
	return this->_type;
}