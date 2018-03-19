#include <iostream>
#include <map>
#include <string>

#include "AbstractFactory.h"
#include "ConcreteFactory.h"
#include "UNIT.h"

ObjectFactory < UNIT, std::string >* ConcreteFactory::RealFactory = new ObjectFactory < UNIT, std::string >();

void ConcreteFactory::update() {
	RealFactory->add < defender >("defender");
	RealFactory->add < great_damage >("great_damage");
	RealFactory->add < long_range_damage >("long_range_damage");
}