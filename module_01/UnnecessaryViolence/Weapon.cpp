/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:42:46 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/19 23:07:00 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const string& Weapon::getType()
{
	return (_type);
}

void Weapon::setType(string type)
{
	_type = type;
}

Weapon::Weapon()
{
	_type = "default";
}

Weapon::Weapon(string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	cout << _type <<": destructor called" << endl;
}