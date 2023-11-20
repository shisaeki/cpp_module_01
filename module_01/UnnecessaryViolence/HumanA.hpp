/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:03:50 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/19 23:05:37 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_HPP__
# define __HUMAN_A_HPP__

# include <string>
# include "Weapon.hpp"
using namespace std;

class HumanA
{
	private:
		string _name;
		Weapon _weapon;
	public:
		HumanA(string name, Weapon weapon);
		~HumanA();
		void attack();
};

#endif