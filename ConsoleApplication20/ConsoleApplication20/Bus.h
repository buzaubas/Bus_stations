#pragma once
#include <string>
class Bus
{
private:
	size_t bus_num;
	std::string type;
public:
	Bus();
	Bus(size_t nm, std::string tp);
	size_t get_bus_num();
	std::string get_type();
	void set_bus_num(size_t nm);
	void set_type(const char* tp);
};

