/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:38:38 by atran             #+#    #+#             */
/*   Updated: 2026/02/21 13:56:29 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		MutantStack(const MutantStack &src): std::stack<T>(src){}
		MutantStack &operator=(const MutantStack &src){
			std::stack<T>::operator=(src);
			return *this;
		}
		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator begin() const{
			return this->c.begin();
		}
		const_iterator end() const{
			return this->c.end();
		}
};
