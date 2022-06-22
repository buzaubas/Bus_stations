#include "Stations.h"

Stations::Stations()
{
}

Stations::Stations(const char* str)
{
	std::string info(str);
	auto len = info.find_last_of(' ');
	Station stat(std::stoi(info.substr(len + 1)));
	len = info.find_first_of(' ');
	size_t route_num_add = std::stoi(info.substr(0, len));
	info = info.substr(len + 1);
	len = info.find_first_of(' ');
	std::string begin_add = info.substr(0, len);
	info = info.substr(len + 1);
	len = info.find_first_of(' ');
	std::string end_add = info.substr(0, len);
	Route rout(route_num_add, begin_add, end_add);
	info = info.substr(len + 1);
	len = info.find_first_of(' ');
	std::string type_add = info.substr(0, len);
	info = info.substr(len + 1);
	len = info.find_first_of(' ');
	size_t bus_num_add = std::stoi(info.substr(0, len));
	Bus bs(bus_num_add, type_add);
}
