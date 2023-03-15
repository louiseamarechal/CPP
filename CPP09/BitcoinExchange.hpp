#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <map>
#include <string>
#include <cfloat>
#include <iostream>
#include <sstream>

std::map<std::string, float>	parseDatabase(std::string file);
bool							checkFileFormat();
bool							isDateOk(std::string date);
bool							isValueOk(std::string file, float value);
float							multiplyValues(float rate, float bcValue);

// Needed function :
// 		- std::map parseDatabase()
//		- bool checkFileFormat()
// 			bool isDateOk()
// 			bool isValueOk()
// 		- float multiplyValues()

#endif
