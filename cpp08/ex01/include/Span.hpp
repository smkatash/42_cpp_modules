/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:05:57 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/17 17:11:24 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
# include <vector>
# include <numeric>
# include <iostream>
# include <cstdlib>

class Span {
	private:
		unsigned long		_size;
		std::vector<int>	_Vect;

	public:
		Span(const unsigned int& N);
		Span(const Span& other);
		Span& operator=(const Span& cpyParent);
		~Span();
		void addNumber(int num);
		void addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		class SpanFullException : public std::exception {
			public:
				const char* what() const throw() {
					return ("Span is full");
				}
		};
		class SpanEmptyException : public std::exception {
			public:
				const char* what() const throw() {
					return ("Span is empty");
				}
		};

};

#endif
