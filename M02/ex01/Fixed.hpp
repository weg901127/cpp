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
		Fixed(const Fixed &src);
		Fixed&	operator=(const Fixed& src);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed(const int input);
		Fixed(const float input);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& src);
#endif
