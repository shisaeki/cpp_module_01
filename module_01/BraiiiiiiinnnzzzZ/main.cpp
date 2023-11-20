/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:53:51 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/13 14:38:25 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie1("Foo");
    Zombie  *zombie2 = zombie1.newZombie("Bar");
    zombie2->announce();
    zombie1.randomChump("Baz");
    delete zombie2;
}