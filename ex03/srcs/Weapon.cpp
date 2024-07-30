/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:46:55 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:14:20 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
}

Weapon::Weapon(){
}

Weapon::~Weapon(){
}
void	Weapon::set_Type(std::string type){
	this->_type = type;
}
const std::string& Weapon::get_Type()
{
	return (this->_type);
}

