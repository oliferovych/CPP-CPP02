/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:15 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/14 23:09:53 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor is called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called." << std::endl;
}

Fixed::Fixed(const int int_value)
{
	std::cout << "Integer constructor is called." << std::endl;
	this->setRawBits(int_value << bits);
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor is called." << std::endl;
	this->setRawBits(roundf(float_value * (1 << bits)));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor is called." << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator is called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float Fixed::toFloat( void ) const
{
	return((float)this->value / (1 << bits));
}

int Fixed::toInt( void ) const
{
	return(this->value >> bits);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
