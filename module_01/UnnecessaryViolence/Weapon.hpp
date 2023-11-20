/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:30:12 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/19 23:01:27 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>
# include <string>
using namespace std;

class Weapon
{
	private:
		string _type;
	
	public:
		const string& getType();
		void setType(string type);
		Weapon();
		Weapon(string type);
		~Weapon();
};

#endif