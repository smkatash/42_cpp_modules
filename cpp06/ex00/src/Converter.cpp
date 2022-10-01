/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:00:09 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/01 19:52:07 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

Converter::Converter(const std::string& stringType) : _stringType(stringType) {
    if (stringType.empty())
		throw Converter::InvalidInput();
    if (stringType.length() == 1) {
        if (isdigit(stringType[0])) {
            this->_intType = static_cast<int>(strtol(stringType.c_str(), NULL, 10));
            this->_type = intType;
        } else {
            this->_charType = stringType[0];
            this->_type = charType;
        }
    } else {
        char    *longptr;
        char    *dblptr;
        long    longstr = strtol(stringType.c_str(), &longptr, 10);
        double  doublestr = strtof(stringType.c_str(), &dblptr);
        if (*longptr) {
            if (*dblptr) {
                if (*dblptr == 'f') {
                    this->_floatType = static_cast<float>(doublestr);
                    this->_type = floatType;
                } else {
                    throw Converter::InvalidInput();
                }
            } else {
                this->_doubleType = doublestr;
                this->_type = doubleType;
            }
        } else {
            if (longstr >std::numeric_limits<int>::max() || longstr < std::numeric_limits<int>::min())
                throw Converter::InvalidInput();
            else {
                this->_intType = static_cast<int>(longstr);
                this->_type = intType;
            }
        }
    }
	std::cout << this->_stringType << " is constructed" << std::endl;
}

Converter::~Converter() {
    std::cout << this->_stringType << " is destroyed" << std::endl;
}

/**
 * @brief char type conversion
 */
char    Converter::CharConvert() const {
    switch (this->_type)
    {
    case charType:
        return this->_charType;
    case intType:
        if (!isprint(static_cast<char>(this->_intType)))
            throw Converter::NonDisplayable();
        else
            return static_cast<char>(this->_intType);
    case floatType:
		if (isnan(this->_floatType) || isinf(this->_floatType)
			|| this->_floatType > std::numeric_limits<char>::max() || this->_floatType < std::numeric_limits<char>::min())
			throw Converter::Impossible();
		else if (!isprint(static_cast<char>(this->_floatType)))
			throw Converter::NonDisplayable();
		else
			return static_cast<char>(this->_floatType);
	case doubleType:
		if (isnan(this->_doubleType) || isinf(this->_doubleType)
			|| this->_doubleType > std::numeric_limits<char>::max() || this->_doubleType < std::numeric_limits<char>::min())
			throw Converter::Impossible();
		else if (!isprint(static_cast<char>(this->_doubleType)))
			throw Converter::NonDisplayable();
		else
			return static_cast<char>(this->_doubleType);
	default:
		break;
    }
}

/**
 * @brief integer type conversion
 */
int Converter::IntConvert() const {
    switch (this->_type)
	{
	case charType:
		return static_cast<int>(this->_charType);
	case intType:
		return this->_intType;
	case floatType:
		if (isnan(this->_floatType) || isinf(this->_floatType)
			|| this->_floatType > std::numeric_limits<int>::max() || this->_floatType < std::numeric_limits<int>::min())
			throw Converter::Impossible();
		else
			return static_cast<int>(this->_floatType);
	case doubleType:
		if (isnan(this->_doubleType) || isinf(this->_doubleType)
			|| this->_doubleType > std::numeric_limits<int>::max() || this->_doubleType < std::numeric_limits<int>::min())
			throw Converter::Impossible();
		else
			return static_cast<int>(this->_doubleType);
	default:
		break;
	}
}

/**
 * @brief float type conversion
 */
float   Converter::FloatConvert() const {
	switch (this->_type)
	{
	case charType:
		return static_cast<float>(this->_charType);
	case intType:
		return static_cast<float>(this->_intType);
	case floatType:
		return this->_floatType;
	case doubleType:
		return static_cast<float>(this->_doubleType);
	default:
		break;
	}
}

/**
 * @brief double type conversion
 */
double Converter::DoubleConvert() const{
	switch (this->_type)
	{
	case charType:
		return static_cast<double>(this->_charType);
	case intType:
		return static_cast<double>(this->_intType);
	case floatType:
		return static_cast<double>(this->_floatType);
	case doubleType:
		return this->_doubleType;
	default:
		break;
	}
}

std::ostream& operator<<(std::ostream& o, const Converter& Parent)
{
	o << "char: ";
	try
	{
		char c;
		c = Parent.CharConvert();
		o << "'" << c << "'" << std::endl;
	}
	catch(const std::exception& err)
	{
		o << err.what() << std::endl;
	}
	o << "int: ";
	try
	{
		int i;
		i = Parent.IntConvert();
		o << i << std::endl;
	}
	catch(const std::exception& err)
	{
		o << err.what() << std::endl;
	}
	o << "float: ";
	try
	{
		float f;
		f = Parent.FloatConvert();
		double intPart;
		if (modf(f, &intPart) == 0)
			o.precision(1);
		o << std::fixed << f << "f" << std::endl;
	}
	catch(const std::exception& err)
	{
		o << err.what() << std::endl;
	}
	o << "double: ";
	try
	{
		double d;
		d = Parent.DoubleConvert();
		double intPart;
		if (modf(d, &intPart) == 0)
			o.precision(1);
		o << std::fixed << d << std::endl;
	}
	catch(const std::exception& err)
	{
		o << err.what() << std::endl;
	}
	return o;
}