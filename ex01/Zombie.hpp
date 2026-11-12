#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <stdlib.h>
#include <string>

class Zombie {
	public :
		Zombie();
		Zombie(std::string new_name);
		~Zombie();

		//Setter
		void setName(std::string name);

	 	void announce(void);

	private :
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif