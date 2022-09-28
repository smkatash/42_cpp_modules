/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:49:38 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/28 15:54:07 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/IMateriaSource.hpp"
#include "include/MateriaSource.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"
#include "include/Character.hpp"
// #include <stdlib.h>

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	bob->use(0, *me);
	bob->use(1, *me);
	me->unequip(1);
	me->equip(NULL);
	me->equip(NULL);
	me->use(1, *bob); // unequipped, can not cure any more, can not shoot anything, if change to 0 -> ice

	ICharacter* jay = new Character("jay");
	bob->use(0, *jay);
	jay->equip(NULL);
	jay->use(0, *me); // has nothing, can not shoot

	delete jay;
	delete bob;
	delete me;
	delete src;
	//system("leaks Interfaces");
	return (0);
}