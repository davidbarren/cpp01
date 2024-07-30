/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:50:40 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:15:41 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wep): _wep(&wep) ,_name(name){
} 
HumanA::HumanA(){
}
HumanA::~HumanA(){
}
std::string HumanA::get_wep_type()
{
	return (_wep->get_Type());
}
void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their "
		<< get_wep_type() << std::endl;
}
