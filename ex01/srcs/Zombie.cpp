/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:57:58 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 15:19:21 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}
Zombie::Zombie(std::string name): _name(name)
{
}
Zombie::Zombie(){
}
Zombie::~Zombie(){
	std::cout << _name << std::endl;
}
