#ifndef Harl_HPP
# define Harl_HPP

# include <iostream>

class Harl{
	private:
		std::string	lv_idx[4];
		void	(Harl::*f[4])(void);
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Harl();
		void	complain( std::string level );
};

#endif
