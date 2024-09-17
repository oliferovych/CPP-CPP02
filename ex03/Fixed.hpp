/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:12 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/17 14:30:25 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int value);
		Fixed(const float value);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed &value) const;
		bool operator<(const Fixed &value) const;
		bool operator>=(const Fixed &value) const;
		bool operator<=(const Fixed &value) const;
		bool operator==(const Fixed &value) const;
		bool operator!=(const Fixed &value) const;

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		Fixed operator+(const Fixed &value) const;
		Fixed operator-(const Fixed &value) const;
		Fixed operator*(const Fixed &value) const;
		Fixed operator/(const Fixed &value) const;

		static Fixed &max(const Fixed &a,const Fixed &b);
		static Fixed &max(Fixed &a,Fixed &b);
		static Fixed &min(const Fixed &a,const Fixed &b);
		static Fixed &min(Fixed &a,Fixed &b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
