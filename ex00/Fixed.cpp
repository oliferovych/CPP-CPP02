/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:15 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/14 22:36:31 by dolifero         ###   ########.fr       */
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
	std::cout << "getRawBits member function is called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function is called" << std::endl;
	this->value = raw;
}
