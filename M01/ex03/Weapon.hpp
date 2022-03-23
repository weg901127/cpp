#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon( std::string type );
		std::string const& getType( void );
		void		setType( std::string type );
};
#endif
