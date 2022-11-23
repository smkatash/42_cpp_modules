/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:52:56 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/15 14:53:19 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template <typename Type>
class Array {
	private:
		Type*			_array;
		std::size_t		_size;

	public:
		Array(void) : _array(NULL), _size(0) {
			std::cout << "default Array is constructed" << std::endl;
		}

		Array(unsigned int n) : _size(n) {
			this->_size = n;
			if (this->_size > 0)
				this->_array = new Type[this->_size];
			else
				this->_array = nullptr;
			std::cout << "Array with size " << this->_size << " is constructed" << std::endl;
		}

		~Array(void) {
			if (this->_array != nullptr)
				delete [] this->_array;
			this->_array = nullptr;
			this->_size = 0;
			std::cout << "Array is destroyed" << std::endl;
		}

		std::size_t size(void) const {
			return this->_size;
		}

		Array(const Array& cpy): _size(cpy.size()) {
			if (this->_size > 0)
				this->_array = new Type[this->_size];
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = cpy._array[i];
			std::cout << "Copy constructor is called" << std::endl;
		}

		Array& operator=(const Array& eq) {
			if (this != &eq)
			{
				delete [] this->_array;
				this->_array = nullptr;
				this->_size = 0;
			}
			this->_size = eq.size();
			if (this->_size > 0)
			{
				this->_array = new Type[this->_size];
				for (size_t i = 0; i < this->_size; i++)
					this->_array[i] = eq._array[i];
			}
			std::cout << "Array overloading" << std::endl;
			return *this;
		}

		Type& operator[](unsigned int i) {
			if (i < this->_size)
				return this->_array[i];
			else
				throw OutofRange();
		}

		class OutofRange: public std::exception {
 		public:
			const char* what(void) const throw() {
				return "Out of Range";
			}
		};
};


#endif
