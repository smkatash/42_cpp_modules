/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:20:25 by kanykei           #+#    #+#             */
/*   Updated: 2022/10/03 13:40:14 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

class OutofRangeException: public std::exception {
    public:
    const char* what() const throw() {
        return ("Element is out of range");
    }
};

template <typename T>
typename T::iterator easyFind(T& container,int toFind) {
    typename T::iterator indx = std::find(container.begin(), container.end(), toFind);
    if (indx != container.end())
        return indx;
    else
        throw OutofRangeException();
}

#endif