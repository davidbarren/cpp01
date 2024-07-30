/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:36:09 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 18:20:08 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	const std::string &get_Type();
	void set_Type(std::string type);
	private:
		std::string _type;
};

#endif
