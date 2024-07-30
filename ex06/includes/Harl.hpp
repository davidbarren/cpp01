/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 23:05:20 by dbarrene          #+#    #+#             */
/*   Updated: 2024/07/31 00:48:48 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#ifndef HARL_HPP
# define HARL_HPP
class Harl
{
	public:
	void	complain(std::string level);
	void	complain_extra(std::string level);
	private:
	void	debug();
	void	info();
	void	warning();
	void	error();
};
#endif 
