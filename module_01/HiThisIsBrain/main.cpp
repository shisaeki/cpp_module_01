/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:41:06 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/11/14 16:25:43 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "HI THIS IS BRAIN";
    string* ptr = &str;
    string& ref = str;

    cout << "-----ADDRESS-----" << endl;
    cout << "str: " << &str << endl;
    cout << "ptr: " << ptr << endl;
    cout << "ref: " << &ref << endl;
    cout << "-----VALUE-----" << endl;
    cout << "str: " << str << endl;
    cout << "ptr: " << *ptr << endl;
    cout << "ref: " << ref << endl;
}