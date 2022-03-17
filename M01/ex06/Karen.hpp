#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen{
	private:
		std::string	lv_idx[4];
		void	(Karen::*f[4])(void);
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Karen();
		void	complain( std::string level );
};

#endif
