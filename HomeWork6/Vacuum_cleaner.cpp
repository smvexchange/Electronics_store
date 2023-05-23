#include <iostream>
#include "Vacuum_cleaner.h"

Vacuum_cleaner::Vacuum_cleaner(int power, int weight, int battery_life) : Device(battery_life), Appliances(weight), power_(power) {}

void Vacuum_cleaner::show_power() {
	std::cout << "Power\t\t" << power_ << std::endl;
}

void Vacuum_cleaner::show_spec() {
	std::cout << "--------------------" << std::endl;
	show_power();
	show_battery_life();
	show_weight();
	std::cout << "--------------------" << std::endl;
}
