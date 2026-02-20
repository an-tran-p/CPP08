/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:36:33 by atran             #+#    #+#             */
/*   Updated: 2026/02/20 17:23:03 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <iostream>

class Span {
    private:
        unsigned int _maxSize;
        std::vector<int> _numbers;
    public:
        Span(unsigned int N);
        Span(const Span &src) = default;
        Span &operator=(const Span &src) = default;
        ~Span() = default;

        void addNumber(int value);
        int longestSpan() const;
        int shortestSpan() const;

        template <typename T>
        void addMultiple(T begin, T end)
        {
            size_t count = std::distance(begin, end);
            if (count > (_maxSize - _numbers.size()))
                throw std::runtime_error("There is not enough space for the whole range!");
            _numbers.insert(_numbers.end(), begin, end);
        }
};