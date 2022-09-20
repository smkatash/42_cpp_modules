/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:18:31 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/20 13:44:23 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie(std::string _name);
	~Zombie(void);
	void announce( void );
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
