/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:18:14 by atran             #+#    #+#             */
/*   Updated: 2026/02/18 11:38:01 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v;

    v.push_back(2);
    v.push_back(2);
    v.push_back(40);

    try{
        std::vector<int>::iterator it = easyfind(v, 2);
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(v, 42);
    } catch (const std::exception &e){
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::list<int> numbers = {3,5, 0,-7,9};
    try {
        std::list<int>::iterator it = easyfind(numbers, -7);
        std::cout << "Found: " << *it << std::endl;

        it = easyfind(numbers, -1);
    }catch (const std::exception &e){
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}