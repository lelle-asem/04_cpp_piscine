#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;

public:
	HumanB(std::string name);
	~HumanB(void);
	Weapon *weapon;
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif