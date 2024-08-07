/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:25:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/07 15:45:14 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	std::string infile;
	std::string outfile;
	std::string target;
	std::string rep;
	std::string buf;
	std::string file;
	size_t	targetindex = 1;
	std::ostringstream contents;
	if (argc != 4){
		std::cout << "Incorrect usage: Please include filename, target" 
			<< " string and replacement string" << std::endl;
		return 3 ;
	}
	infile = argv[1];
	target = argv[2];
	rep = argv[3];
	std::fstream input(infile);

	input.open(infile);
	if (input.is_open())
	{
		contents << input.rdbuf();
		input.close();
		file = contents.str();
	}
	else
	{
		std::cout << "failed to open input file, please make"<<
			" sure that it exists and has correct permissions" << std::endl;
		return 1;
		}
	std::cout << "contents of file " << file << std::endl;
	std::cout << "contents of rep " << rep << std::endl;
	while (targetindex && !target.empty())
	{
		targetindex = file.find(target);
		if (targetindex > file.length())
			break ;
		file.erase(targetindex, target.length());
		file.insert(targetindex, rep);
	}
	std::ofstream output(infile + ".replace");
	if (output.is_open()){
		output << file;
	}
	else
	{
		std::cout << "failed to create output file" << std::endl;
		return 2;
	}
}
