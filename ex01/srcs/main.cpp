/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 15:41:28 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	std::cout << "Starting allocation" << std::endl;
	Zombie *horde = zombieHorde(5, "hordemember");
	delete[] horde; // delete[] deletes entire array
	return 0;
}
