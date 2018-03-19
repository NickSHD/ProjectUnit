#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "AbstractFactory.h"
#include "UNIT.h"

class Player {
private:

	static ObjectFactory< UNIT, std::string > RealFactory;
	std::vector< UNIT* > army;
	std::map < std::string, int > stat;
	void print_pair(std::pair < std::string, int >);


public:


	Player(int);
	void take_statistic();
	int take_index(std::string);
	void take_units(std::string, int);


};