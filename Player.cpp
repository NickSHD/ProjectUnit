#include <iostream>
#include <map>
#include <string>

#include "Player.h"
#include "AbstractFactory.h"
#include "UNIT.h"
#include "ConcreteFactory.h"

void Player::print_pair(std::pair < std::string, int > pair) {
	std::cout << pair.first << " = " << pair.second << std::endl;
}

Player::Player(int money) {
	stat["money"] = money;
	stat["defender"] = 0;
	stat["great_damage"] = 0;
	stat["long_range_damage"] = 0;
}

void Player::take_statistic() {
	for (auto it : stat) {
		print_pair(it);
	}
}

int Player::take_index(std::string index) {
	return stat[index];
}


void Player::take_units(std::string type, int count) {
	UNIT* soldier = ConcreteFactory::RealFactory->CreateUnit(type);
	if (soldier->cost * count > stat["money"])
		std::cout << "You don't have enough money" << std::endl;
	else {
		for (int i = 0; i < count; i++) {
			army.push_back(ConcreteFactory::RealFactory->CreateUnit(type));
			stat[type]++;
		}
		stat["money"] -= soldier->cost * count;
	}
}