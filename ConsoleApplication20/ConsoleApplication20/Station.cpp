#include "Station.h"

Station::Station()
{
}

Station::Station(size_t nm) : station_num(nm)
{
}

Station::Station(size_t nm, std::vector<Route> br) : station_num(nm), branch(br)
{
}

void Station::add_path(Route pth)
{
	this->branch.push_back(pth);
}
