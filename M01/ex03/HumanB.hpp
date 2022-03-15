#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
	private:
		Weapon		*wtype;
		std::string	name;
	public:
		HumanB( std::string name );
		void		attack( void );
		void		setWeapon( Weapon &wtype );
};
#endif // HUMANB_HPP
