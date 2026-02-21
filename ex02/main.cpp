/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:42:36 by atran             #+#    #+#             */
/*   Updated: 2026/02/21 14:23:14 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(){
	std::cout << "--------------------------Test with MutantStack--------------------------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack elements are: " <<std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "--------------------------Test with List--------------------------" << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator lit = list.begin();
	std::list<int>::iterator lite = list.end();
	++lit;
	--lit;
	std::cout << "list elements are: " <<std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << "--------------------------Own test--------------------------" << std::endl;
	for (auto i = mstack.begin(); i != mstack.end(); ++i)
		*i *= 2;
	MutantStack<int>::iterator begin = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
	std::cout << "modified mstack elements are: " <<std::endl;
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		++begin;
	}
	return 0;
}
