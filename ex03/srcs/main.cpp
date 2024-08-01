/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:45:04 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 16:37:46 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("some club");

		HumanA bobert = HumanA("Bobert", club);
		bobert.attack();
		club.set_Type("bonker");
		bobert.attack();
	}
	{
		Weapon club = Weapon("some club");

		HumanB jim = HumanB("Jim");
		jim.attack();
		jim.set_Weapon(club);
		jim.attack();
		club.set_Type("mace");
		jim.attack();
	}
	return 0;
}
