/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:54:35 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 19:12:28 by kanykei          ###   ########.fr       */
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
        const std::string& _stringType;
        char               _charType;
        int                _intType;
        float              _floatType;
        double             _doubleType;
        enum _Type {
            charType, 
            intType, 
            floatType, 
            doubleType
        } _type;
        
    public:
        Converter(const std::string& stringType);
		Converter(const Converter& Parent);
        ~Converter();
		Converter&	operator=(const Converter& cpyParent);
        
        char    CharConvert() const;
        int     IntConvert() const;
        float   FloatConvert() const;
        double  DoubleConvert() const;

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
std::ostream& operator<<(std::ostream& o, const Converter& Parent);

#endif
