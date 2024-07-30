/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:59:33 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 14:58:25 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	// basic announce functionality
	Zombie zomb("madonna");
	zomb.announce();
	// newZombie functionality
	Zombie* ptr;
	ptr = newZombie("baboon");
	ptr->announce();
	delete ptr;
	//randomChump functionality
	randomChump("david");
}
