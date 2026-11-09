#include "Zombie.hpp"

//The allocated Zombie exists until we destroy it manually
//The constructed zombie destroys itself at the end of the function

int main(void)
{
	Zombie *Zombie1;

	Zombie1 = newZombie("Allocated Zombie");
	Zombie1->announce();
	randomChump("Constructed Zombie");
	delete Zombie1;
	return 0;
}