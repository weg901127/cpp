#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	private:
		Weapon		&wtype;
		std::string	name;
	public:
		HumanA(std::string name, Weapon &wtype) : wtype(wtype), name(name){};
		void		attack( void );
};
#endif // HUMANA_HPP
