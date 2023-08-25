#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:

	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();

	Fixed &operator = (const Fixed &other);

	int		getRawBits(void) const;
	void	setRawBits(const int &raw);
	int		toInt();
	float	toFloat();

private:

	int					_value;
	static const int	_fractional_bits = 8;
};

std::ostream &operator << (std::ostream &flux, const Fixed &fixed);

#endif
