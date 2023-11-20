/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:09:52 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/20 12:10:50 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;
    
    cout << a.getRawBits() << endl;
    cout << b.getRawBits() << endl;
    cout << c.getRawBits() << endl;
    
    return (0);
}