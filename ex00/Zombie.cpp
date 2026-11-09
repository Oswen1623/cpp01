#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	this->_name = new_name;
	std::cout << this->_name << " created." << std::endl;
	// announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}