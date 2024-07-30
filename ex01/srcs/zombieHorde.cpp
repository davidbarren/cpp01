/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:51 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 15:39:02 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieptr = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombieptr[i].set_name(name);
//		zombieptr->announce();
	}
	std::cout << "Ending allocation" << std::endl;
	return (zombieptr);
}
