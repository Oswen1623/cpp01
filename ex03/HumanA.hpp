#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>

class Weapon;

class HumanA {
	public :
		HumanA(std::string name, Weapon &new_weapon);
		~HumanA(void);

		void attack(void) const;

	private :
		std::string _name;
		Weapon &weapon;

};

#endif