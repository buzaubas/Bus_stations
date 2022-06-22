#include "Route.h"

Route::Route()
{
}

Route::Route(size_t nm, std::string bg, std::string ed) : route_num(nm), begin(bg), end(ed)
{
}

Route::Route(size_t nm, const char* bg, const char* ed, std::vector<Bus> ls) : route_num(nm), begin(bg), end(ed), list(ls)
{
}

size_t Route::get_route_num()
{
	return this->route_num;
}

std::string Route::get_begin()
{
	return this->begin;
}

std::string Route::get_end()
{
	return this->end;
}

void Route::set_route_num(size_t nm)
{
	this->route_num = nm;
}

void Route::set_begin(const char* bg)
{
	this->begin = bg;
}

void Route::set_end(const char* ed)
{
	this->end = ed;
}

void Route::add_bus(Bus bs)
{
	this->list.push_back(bs);
}

