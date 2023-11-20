/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:39 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/19 23:05:57 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	cout << _name << " attacks with there " << _weapon.getType() << endl;
}

HumanA::HumanA(string name, Weapon weapon)
{
	_name = name;
	_weapon = weapon;
}

HumanA::~HumanA()
{
	cout << "HumanA died." << endl;
}