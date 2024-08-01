/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:54:46 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/02 00:55:44 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>



class Zombie
{
	public:
	Zombie(std::string name);
	~Zombie();
	Zombie();
	void announce(void);
	void set_name(std::string name);
	private:
		std::string _name;

};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
