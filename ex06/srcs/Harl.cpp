/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:07:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 14:58:38 by dbarrene         ###   ########.fr       */
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
	int	i;
	fun arr[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"debug", "info", "warning", "error"};

	for (i = 0; i < 4; i++){
		if (!level.compare(lvls[i]))
				break ;
	}
	if (i == 4)
		return ;
	(this->*arr[i])();
	 return ;
}

void	Harl::complain_extra(std::string level)
{
	int	i;
	std::string lvls[4] = {"debug", "info", "warning", "error"};
	for (i = 0; i < 4; i++){
		if (!level.compare(lvls[i]))
				break ;
	}
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			this->info();
			this->warning();
			this->error();
			break ;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			this->warning();
			this->error();
			break ;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			this->error();
			break ;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			break ;
		default:
			std::cout << "You probably can't even exit vim anyway" << std::endl;

	}
}
