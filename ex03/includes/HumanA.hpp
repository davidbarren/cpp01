/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:39:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:14:22 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"
class HumanA
{
	public:
	HumanA();
	HumanA(std::string name, Weapon& wep);
	~HumanA();
	void attack();
	std::string get_wep_type();
	private:
	Weapon* _wep;
	std::string	_name;
};
