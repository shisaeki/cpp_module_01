/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:27:05 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/20 19:35:50 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <iostream>
using namespace std;

class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed& operator=(const Fixed& copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif