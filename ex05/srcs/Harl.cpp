/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:07:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 00:56:25 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

void	Harl::debug(){
	std::cout << "I Love Vim motions" << std::endl;
}
void	Harl::info(){
	std::cout << "Vim Diesel is my favorite actor" << std::endl;
}
void	Harl::warning(){
	std::cout << "Warning! Use of mouse detected" << std::endl;
}
void	Harl::error(){
	std::cout << "EMACS usage detected! FATAL ERROR!" << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*fun)();
//	using fun = void (Harl::*)();
	int	i;
	fun arr[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"debug", "info", "warning", "error"};

	for (i = 0; i < 4; i++)
	{
		if (!level.compare(lvls[i]))
				break ;
	}
	if (i == 4)
		return ;
	(this->*arr[i])();
	 return ;
}
