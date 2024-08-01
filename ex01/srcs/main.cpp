/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 15:13:48 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	std::cout << "Starting allocation" << std::endl;
	Zombie *horde = zombieHorde(5, "hordemember");
	std::cout << "size of object: " << sizeof(Zombie) << std::endl;
	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
		std::cout << "address of horde member: " <<  &horde[i] << std::endl;
	}
	delete[] horde; // delete[] deletes entire array
	return 0;
}
