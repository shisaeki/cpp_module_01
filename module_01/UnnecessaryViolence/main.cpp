/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:51:57 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/14 17:23:51 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	club.setType("some other type of club");
	bob.attack();
}