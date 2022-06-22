#pragma once
#include <string>
#include <vector>
#include "Bus.h"
class Route
{
private:
	size_t route_num;
	std::string begin;
	std::string end;
	std::vector<Bus> list;
public:
	Route();
	Route(size_t nm, std::string bg, std::string ed);
	Route(size_t nm, const char* bg, const char* ed, std::vector<Bus> ls);
	size_t get_route_num();
	std::string get_begin();
	std::string get_end();
	void set_route_num(size_t nm);
	void set_begin(const char* bg);
	void set_end(const char* ed);
	void add_bus(Bus bs);
};

