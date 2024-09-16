/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:52:15 by dolifero          #+#    #+#             */
/*   Updated: 2024/09/15 02:00:48 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//PREV EXCERCISE CLASS FUNCTIONS

Fixed::Fixed() : value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int int_value)
{
	this->setRawBits(int_value << bits);
}

Fixed::Fixed(const float float_value)
{
	this->setRawBits(roundf(float_value * (1 << bits)));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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


// NEW OPERATORS

//Comparison operators

bool Fixed::operator>(const Fixed &value) const
{
	if(toFloat() > value.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &value) const
{
	if(toFloat() < value.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &value) const
{
	if(toFloat() >= value.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &value) const
{
	if(toFloat() <= value.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed &value) const
{
	if(toFloat() == value.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &value) const
{
	if(toFloat() != value.toFloat())
		return (true);
	else
		return (false);
}

//Increment/decrement operators

Fixed Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->value++;
	return(temp);
}

Fixed Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->value--;
	return(temp);
}

//Arithmetic operators

float Fixed::operator+(const Fixed &value) const
{
	return(toFloat() + value.toFloat());
}

float Fixed::operator-(const Fixed &value) const
{
	return(toFloat() - value.toFloat());
}

float Fixed::operator*(const Fixed &value) const
{
	return(toFloat() * value.toFloat());
}

float Fixed::operator/(const Fixed &value) const
{
	return(toFloat() / value.toFloat());
}

//Min and max functions

Fixed &Fixed::max(const Fixed &a,const Fixed &b)
{
	return (Fixed &)(a > b ? a : b);
}

Fixed &Fixed::max(Fixed &a,Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(const Fixed &a,const Fixed &b)
{
	return (Fixed &)(a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a,Fixed &b)
{
	return (a > b ? a : b);
}

