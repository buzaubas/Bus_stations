#include "Bus.h"

Bus::Bus()
{
}

Bus::Bus(size_t nm, std::string tp) : bus_num(nm), type(tp)
{
}

size_t Bus::get_bus_num()
{
	return this->bus_num;
}

std::string Bus::get_type()
{
	return this->type;
}

void Bus::set_bus_num(size_t nm)
{
	this->bus_num = nm;
}

void Bus::set_type(const char* tp)
{
	this->type = tp;
}
