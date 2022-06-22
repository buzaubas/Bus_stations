#pragma once
#include <string>
#include <vector>
#include "Station.h"

class Stations
{
private:
	std::vector<Station> stations;
public:
	Stations();
	Stations(const char* str);
};