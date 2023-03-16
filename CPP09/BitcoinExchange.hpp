#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <map>
#include <string>
#include <cfloat>
#include <iostream>
#include <sstream>

std::map<std::string, float>	parseDatabase(std::string file);
// bool							checkFileFormat();
bool							isDateOk(std::string date);
bool							isValueOk(float value);
float							multiplyValues(std::string date, float bcValue, std::map<std::string, float> exchMap);
void							getResult(std::map<std::string, float> exchMap, std::string file);
std::string						findLastAvailableRate(std::map<std::string, float> exchMap, std::string date);
// Needed function :
// 		- std::map parseDatabase()
//		- bool checkFileFormat()
// 			bool isDateOk()
// 			bool isValueOk()
// 		- float multiplyValues()

#endif
