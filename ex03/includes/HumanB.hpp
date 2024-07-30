/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:44:10 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:16:21 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	set_Weapon(Weapon& wep);
	std::string get_wep_type();
	private:
	Weapon *_wep;
	std::string	_name;
};
