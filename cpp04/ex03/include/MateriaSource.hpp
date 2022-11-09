/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:42:22 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:15:22 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materia[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &Parent);
		MateriaSource& operator=(const MateriaSource &cpyParent);
		~MateriaSource(void);
		void learnMateria(AMateria* type);
		AMateria* createMateria(const std::string &type);
};


#endif
