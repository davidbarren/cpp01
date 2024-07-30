/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:54:46 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 15:19:12 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	void set_name(std::string name);
	private:
		std::string _name;

};

Zombie	*zombieHorde(int N, std::string name);
