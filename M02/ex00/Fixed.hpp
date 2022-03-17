#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int					fvalue;
		static const int	frac = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &src);
		Fixed&	operator=(Fixed& src);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
