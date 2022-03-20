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
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		float	operator+(const Fixed& src);
		float	operator-(const Fixed& src);
		float	operator*(const Fixed& src);
		float	operator/(const Fixed& src);
		bool	operator>(const Fixed& src) const;
		bool	operator>=(const Fixed& src) const;
		bool	operator<(const Fixed& src) const;
		bool	operator<=(const Fixed& src) const;
		bool	operator==(const Fixed& src) const;
		bool	operator!=(const Fixed& src) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed(const int input);
		Fixed(const float input);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& src);
#endif
