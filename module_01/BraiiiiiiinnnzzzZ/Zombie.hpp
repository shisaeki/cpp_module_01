/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:50:30 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/13 14:22:10 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <string>
# include <iostream>
using namespace std;

class Zombie
{
    private:
        string	_name;
	public:
		Zombie(string name);
		~Zombie( void );
        Zombie *newZombie(string name);
        void randomChump(string name);
        inline void announce( void )
        {
            cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
        }
};

#endif