/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:51:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:17:03 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"


HumanB::HumanB(std::string name): _name(name){
} 
HumanB::HumanB(){
}
HumanB::~HumanB(){
}

void	HumanB::set_Weapon(Weapon &wep)
{
	this->_wep = &wep;
}

std::string HumanB::get_wep_type()
{
	return (_wep->get_Type());
}
void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their "
		<< get_wep_type() << std::endl;
}
