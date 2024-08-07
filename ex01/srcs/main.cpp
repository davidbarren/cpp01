/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/07 17:21:23 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	int	count;
	count = 5;

	std::cout << "Starting allocation" << std::endl;
	Zombie *horde = zombieHorde(count, "hordemember");
	if (!horde)
	{
		std::cout << "error allocating zombie horde, exiting" << std::endl;
		return 1;
	}
	std::cout << "size of object: " << sizeof(Zombie) << std::endl;
	for (int i = 0; i < count; i++)
	{
		horde[i].announce();
		std::cout << "address of horde member: " <<  &horde[i] << std::endl;
	}
	delete[] horde; // delete[] deletes entire array
	return 0;
}
