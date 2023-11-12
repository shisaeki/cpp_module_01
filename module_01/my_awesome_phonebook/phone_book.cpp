/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:12:43 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/12 22:53:17 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdint>
#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct s_record
{
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;
}				t_record;


class PhoneBook
{
    public:
        t_record record[8];
		PhoneBook();
		void add(string first_name, string last_name, string nickname, string phone_number, string darkest_secret);
		void search();
		void exit();
	
	private:
		uint32_t	_index;
};

PhoneBook::PhoneBook()
{
	_index = 0;
}

void PhoneBook::add(string first_name, string last_name, string nickname, string phone_number, string darkest_secret)
{
	record[_index].first_name = first_name;
	record[_index].last_name = last_name;
	record[_index].nickname = nickname;
	record[_index].phone_number = phone_number;
	record[_index].darkest_secret = darkest_secret;
	if (_index < 7)
		_index++;
	else
		_index = 0;
}

void PhoneBook::search()
{
	uint32_t i;

	i = 0;
	while (i < 8)
	{
		cout << i << " | ";
		cout << record[i].first_name << " | ";
		cout << record[i].last_name << " | ";
		cout << record[i].nickname << " | ";
		cout << record[i].phone_number << " | ";
		cout << record[i].darkest_secret << endl;
		i++;
	}
}

void PhoneBook::exit()
{
	::exit(0);
}


int main()
{
	PhoneBook phonebook;

	phonebook.add("shin", "saeki", "shin", "010-1234-5678", "shin's darkest secret");
	phonebook.add("shin", "saeki", "shin", "010-1234-5678", "shin's darkest secret");
	phonebook.search();
	phonebook.exit();

	return (0);
}