/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:03:18 by atran             #+#    #+#             */
/*   Updated: 2026/02/19 16:36:07 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span(unsigned int N): _maxSize(N){}

void Span::addNumber(int value){
    if (_numbers.size() == _maxSize)
        throw std::runtime_error("Span is full");
    _numbers.push_back(value);
}

int Span::longestSpan() const {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers");
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    return (max - min);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers");
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    int minSpan = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); i++)
    {
        int span = tmp[i] - tmp[i -1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}