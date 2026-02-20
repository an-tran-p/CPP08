/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:58:23 by atran             #+#    #+#             */
/*   Updated: 2026/02/20 17:35:44 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main(){
    std::cout << "------------------Subject's tests------------------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "------------------Own tests------------------" << std::endl;
    try{
    Span a(10000);
    std::vector<int> v(10000);
    std::srand(std::time(NULL));
    for (size_t i = 0; i < v.size(); i++)
        v[i] = std::rand();
    a.addMultiple(v.begin(), v.end());
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
    a.addNumber(9);
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}