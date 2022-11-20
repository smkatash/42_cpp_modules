/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:23:39 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/17 16:55:43 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const unsigned int& N) : _size(N) {
}

Span::Span(const Span& Parent) : _size(Parent._size), _Vect(Parent._Vect) {
}

Span::~Span() {}

Span& Span::operator=(const Span& cpyParent)
{
	if (this != &cpyParent)
	{
		this->_Vect = cpyParent._Vect;
		this->_size = cpyParent._size;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (this->_Vect.size() < this->_size)
		this->_Vect.push_back(num);
	else
		throw SpanFullException();
}

void Span::addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end)
{
	int distance = std::distance(begin, end);
	if (distance + this->_Vect.size() > this->_size)
	{
		this->_Vect.insert(this->_Vect.end(), begin, begin + (this->_size - this->_Vect.size()));
		throw SpanFullException();
	}
	else
		this->_Vect.insert(this->_Vect.end(), begin, end);
}

/**
 * @cite Default implementation - the difference b/w two adjacent items
 * back_inserter container that supports a push_back operation
 * _OutputIterator transform(_InputIterator __first, _InputIterator __last, 
 * _OutputIterator __result, _UnaryOperation __op)
 */
unsigned int Span::shortestSpan() const
{
	std::vector<int> temp;

	if (this->_Vect.size() <= 1)
		throw SpanEmptyException();
	std::adjacent_difference(this->_Vect.begin(), this->_Vect.end(), std::back_inserter(temp));
	int (*iabs)(int) = &std::abs;
	std::transform(temp.begin(), temp.end(), temp.begin(), iabs);
	return *std::min_element(temp.begin(), temp.end());
}

unsigned int Span::longestSpan() const
{
	std::vector<int> temp;
	
	if (this->_Vect.size() <= 1)
		throw SpanEmptyException();
	std::adjacent_difference(this->_Vect.begin(), this->_Vect.end(), std::back_inserter(temp));
	int (*iabs)(int) = &std::abs;
	std::transform(temp.begin(), temp.end(), temp.begin(), iabs);
	return *std::max_element(temp.begin(), temp.end());
}
