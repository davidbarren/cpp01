/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:34:46 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 00:54:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2){
		std::cout << "Please enter a log level for Harl" << std::endl;
		std::cout << "Valid levels are: \"warning\" \"info\" \"debug\" \"error\"";
		std::cout << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain_extra(argv[1]);
	return 0;
}
