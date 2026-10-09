#pragma once
#include "computer.h"

class laptop : public computer
{
private:
	double battery_life;

public:
	laptop(double price, const std::string& model, const std::string& manufacturer, int storage, double battery_life);

	double get_battery_life() const;\

		void print() const override;
};