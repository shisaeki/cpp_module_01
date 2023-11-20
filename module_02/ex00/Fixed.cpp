/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:57:23 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/20 12:11:03 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    _value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    cout << "Copy constructor called" << endl;
    *this = copy;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    cout << "Copy Assignment operator called" << endl;
    _value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    cout << "setRawBits member function called" << endl;
    _value = raw;
}