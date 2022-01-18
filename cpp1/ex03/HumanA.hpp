#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	Weapon &weapon;
	void attack();
};

#endif