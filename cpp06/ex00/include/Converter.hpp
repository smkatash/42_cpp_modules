/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktashbae <ktashbae@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:54:35 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/13 16:25:20 by ktashbae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <limits.h>
# include <stdlib.h>
# include <math.h> 

class Converter {
	private:
		const std::string	&_stringType;
		char				_charType;
		int					_intType;
		float				_floatType;
		double				_doubleType;
		enum _Type {
			charType, 
			intType, 
			floatType, 
			doubleType
		} _type;
		
	public:
		Converter(const std::string &stringType);
		Converter(const Converter &Parent);
		~Converter(void);
		Converter	&operator=(const Converter &cpyParent);
		char		CharConvert(void) const;
		int			IntConvert(void) const;
		float		FloatConvert(void) const;
		double		DoubleConvert(void) const;

		class InvalidInput : public std::exception {
			public:
				const char* what() const throw() {
					return ("Invalid Input");
				}
		};
		class Impossible : public std::exception {
			public:
				const char* what() const throw() {
					return ("Impossible");
				}
		};
		class NonDisplayable : public std::exception {
			public:
				const char* what() const throw() {
					return ("Non displayable");
				}
		};
};
std::ostream &operator<<(std::ostream &o, const Converter &Parent);

#endif
