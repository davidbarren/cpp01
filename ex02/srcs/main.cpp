/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:43:24 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 02:28:27 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

// Printing memory addresses:
	std::cout << &var << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

// Printing values: 
	std::cout << var << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}
