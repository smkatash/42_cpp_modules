/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:04:17 by kanykei           #+#    #+#             */
/*   Updated: 2022/11/09 21:04:11 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	const std::string bucketList[] = {
		"Hike in a rainforest",
		"See penguins in their natural habitat",
		"Go to an aquarium",
		"Swim with jellyfish",
		"Sleep on a houseboat",
		"Stay in an ice hotel",
		"See all 7 continents",
		"Visit a butterfly sanctuary",
		"Swim with sharks",
		"Attend the Olympics",
		"Stay in an underwater hotel",
		"Make a video that goes viral"
	};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = bucketList[rand() % (sizeof(bucketList) / sizeof(std::string))];
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& Parent)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = Parent._ideas[i];
	std::cout << "Brain copy constructor is called" << std::endl;
}

Brain& Brain::operator=(const Brain& cpyParent)
{
	if (this != &cpyParent)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = cpyParent._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}

const std::string& Brain::getIdea(int index) const
{
	return this->_ideas[index];
}
