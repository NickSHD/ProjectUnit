#pragma once
#include <iostream>
#include <map>
#include <string>

#include "AbstractFactory.h"
#include "UNIT.h"

class ConcreteFactory {
public:
	static ObjectFactory < UNIT, std::string >* RealFactory;
	void update();
};