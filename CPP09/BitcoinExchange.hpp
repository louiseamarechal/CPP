#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <cfloat>
#include <iostream>

std::map<std::string, float>	parseDatabase(std::ifstream ifs);
bool							checkFileFormat();
bool							isDateOk(std::string date);
bool							isValueOk(float value);
float							multiplyValues(float rate, float bcValue);

// Needed function :
// 		- std::map parseDatabase()
//		- bool checkFileFormat()
// 			bool isDateOk()
// 			bool isValueOk()
// 		- float multiplyValues()

#endif
