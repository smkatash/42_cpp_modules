/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:41:47 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:15:27 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"
# include <string>

class IMateriaSource {
	public:
		virtual ~IMateriaSource(void) {};
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(const std::string &type) = 0;
};

#endif