/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:25:26 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/02 18:28:00 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <filesystem>

int	main(int argc, char **argv)
{
	std::string infile;
	std::string outfile;
	std::string target;
	std::string rep;
	std::string buf;
	std::string file;
	size_t	targetindex = 0;

	if (argc != 4){
		std::cout << "Incorrect usage: Please include filename, target" 
			<< " string and replacement string" << std::endl;
		return 3 ;
	}
	infile = argv[1];
	target = argv[2];
	rep = argv[3];
	std::ifstream input;
	input.open(infile);
	if (input.is_open())
	{
		while (!input.eof()){
			getline(input, buf);
			file.append(buf + "\n");
		}
		input.close();
	}
	else{
		std::cout << "failed to open input file, please make"<<
			" sure that it exists and has correct permissions" << std::endl;
		return 1;
		}
	file = file.substr(0, file.length() - 1);
	while (42)
	{
		targetindex = file.find(target, targetindex);
		if (targetindex > file.length())
			break ;
		file.erase(targetindex, target.length());
		file.insert(targetindex, rep);
		targetindex += rep.length();
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
