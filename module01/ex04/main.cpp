/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsukan <minsukan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:30:37 by minsukan          #+#    #+#             */
/*   Updated: 2022/10/16 00:47:38 by minsukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Invalid argument...." << std::endl;
		return (0);
	}
	std::string filename(av[1]);
	std::ifstream infile(filename, std::ios_base::in);
	if (!infile) {
		std::cout << "Failed to open for infile...." << std::endl;
		return (0);	
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile) {
		std::cout << "Failed to opne for outfile..." << std::endl;
		return (0); 
	}
	std::string infile_temp;
	infile >> infile_temp;
	int idx;
	while (1)
	{
		idx = infile_temp.find(av[2]);
		if (idx == -1)
			break ;
		infile_temp = infile_temp.substr(0, idx) + av[3] + infile_temp.substr(idx + 1, infile_temp.size());
	}
	outfile << infile_temp;
}