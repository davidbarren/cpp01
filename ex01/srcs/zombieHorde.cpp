/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:51 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/07 16:07:50 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	try{
		Zombie	*zombieptr = new Zombie[N];
		for(int i = 0; i < N; i++)
			zombieptr[i].set_name(name);
		return (zombieptr);
		}
	catch(const std::exception& ex){
		return (nullptr);}
}
