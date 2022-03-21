#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap {
	private:
		std::string	name;
		int			hitpoints;
		int			energypoints;
		int			attackdamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap& src);
		ClapTrap&	operator=(ClapTrap const& src);
	    explicit	ClapTrap(std::string const& Name);
		void		attack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};
#endif
