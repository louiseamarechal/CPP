/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:23:23 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/18 16:00:11 by lmarecha         ###   ########.fr       */
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

std::string	getFileContent(std::string fileName, int *size) {

	std::ifstream	infile;
	std::string		s3;
	char*			str;

	infile.open(fileName.c_str(), std::ifstream::in); // open file

	if (infile.is_open()) // find file length
	{
		infile.seekg(0, infile.end); // move position to end of file
		*size = infile.tellg(); // get position number (position nb = filse *size) and store it
		if (*size == 0)
			std::cout << "File is empty" << std::endl;
		infile.seekg(0, infile.beg); // move back to beginning of file

		str = new char [*size + 1];
		infile.read(str, *size); // store file content in str

		s3 = convertToString(str, *size);

		infile.close();
		delete [] str;
	}
	else
		std::cout << "Error while openning the file !" << std::endl;

	return (s3);
}

void	replaceStringInNewFile(std::string fileName, std::string s1, std::string s2)
{
	std::ofstream	outfile;
	std::string		s3;

	int				position = 0;
	int				size = 0;

	s3 = getFileContent(fileName, &size);
	if (s3 == "")
		return ;

	while ((int)s3.find(s1) != -1) // find all occurence of s1 and change it for s2
	{
		position = s3.find(s1);
		s3.erase(position, s1.length());
		s3.insert(position, s2);
	}

	outfile.open((fileName + ".replace").c_str(), std::ofstream::out); // open & create outfile
	if (outfile.is_open())
	{
		outfile << s3;
		outfile.close();
	}
	else
		std::cout << "Error while opening/creating the outfile" << std::endl;
}

int	main(int argc, char **argv) {

	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments";
		return 1;
	}

	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	replaceStringInNewFile(fileName, s1, s2);

	return 0;
}
