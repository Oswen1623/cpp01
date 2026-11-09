#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Default Zombie")
{}

Zombie::Zombie(std::string new_name) : _name(new_name)
{
	std::cout << this->_name << " created." << std::endl;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}