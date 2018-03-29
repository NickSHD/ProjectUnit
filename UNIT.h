#pragma once
#include <iostream>
#include <string>


class UNIT {
public:
	int cost;
	int health;
	int speed;
	int damage;
	int income;
	int	consuption;
	virtual std::string info() = 0;
};

class defender : public UNIT {
public:
	std::string info();
	explicit defender();
	~defender()
	{}
};

class long_range_damage : public UNIT {
public:
	std::string info();
	explicit long_range_damage();
	~long_range_damage() {}
};

class great_damage : public UNIT {
public:
	std::string info();
	explicit great_damage();
	~great_damage() {}
};
