#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	private:
		Weapon		&wtype;
		std::string	name;
	public:
		HumanA(std::string const &name, Weapon &wtype);
		void		attack( void );
};
#endif // HUMANA_HPP
