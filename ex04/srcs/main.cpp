/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:25:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/30 21:36:47 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string infile;
	std::string outfile;


	if (argc != 4)
	{
		std::cout << "Incorrect usage: Please include filename, target" 
			<< " string and replacement string" << std::endl;
		return 1 ;
	}
	infile = argv[1];
	outfile = infile;
	outfile.append(".replace");
	std::cout << infile << " " << outfile << std::endl;
	
			
}
