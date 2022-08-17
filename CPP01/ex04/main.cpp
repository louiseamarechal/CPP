/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:23:23 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/17 13:12:04 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	convertToString(char* a, int size)
{
	int i;
	std::string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}



int	main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments";
		return 1;
	}

	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	int				size = 0;
	int				position = 0;

	char*			str;
	std::string		s3;
	std::ifstream	ifs;
	std::ofstream	ofs;


	// ------------ OPEN FILE -------------------
	ifs.open(argv[1], std::ifstream::in);
	//---------------------------------------------

	// ------------- GET FILE LENGTH -------------
	if (ifs)
	{
		ifs.seekg(0, ifs.end); // move position to end of file
		size = ifs.tellg(); // get position number and store it
		ifs.seekg(0, ifs.beg); // move back to beginning of file
	}
	std::cout << "ifs size : " << size << std::endl;
	//----------------------------------------------------

	// ------------ STORE FILE CONTENT -----------------
	str = new char [size + 1];
	ifs.read(str, size); // store file content in str
	ifs.close();
	//-----------------------------------------------------

	// ----------- CHANGE ALL OCCURENCE OF S1 --------------
	s3 = convertToString(str, size);
	std::cout << "S3 before replacement: " << s3 << std::endl;

	while ((int)s3.find(s1) != -1)
	{
		position = s3.find(s1);
		s3.erase(position, s1.length());
		s3.insert(position, s2);
	}

	std::cout << "S3 after replacement: " << s3 << std::endl;
	//--------------------------------------------------------

	// ------------COPIES S3 IN NEW FILE ----------------------
	ofs.open("outfile", std::ofstream::out);
	ofs.write(s3.c_str(), size);
	ofs.close();
	//--------------------------------------------------------

	return 0;
}
