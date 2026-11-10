#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public :
		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);

		//Setter
		void setType(std::string new_type);

	 	//Getter
		const std::string &getType(void) const;

	private :
		std::string _type;

};

#endif