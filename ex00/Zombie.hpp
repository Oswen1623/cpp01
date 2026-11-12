#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <string>

class Zombie{
	public :

		Zombie(std::string new_name);
		~Zombie();

	 	void announce(void);

	private :
		std::string _name;

};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif