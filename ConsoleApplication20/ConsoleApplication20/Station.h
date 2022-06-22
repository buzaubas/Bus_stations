#pragma once
#include <vector>
#include "Route.h"
class Station
{
private:
	size_t station_num;
	std::vector<Route> branch;
public:
	Station();
	Station(size_t nm);
	Station(size_t nm, std::vector<Route> br);
	void add_path(Route pth);
};

