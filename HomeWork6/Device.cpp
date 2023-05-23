#include <iostream>
#include "Device.h"

Device::Device(int battery_life) : battery_life_(battery_life) {}

void Device::show_battery_life() {
	std::cout << "Battery life\t" << battery_life_ << std::endl;
}

void Device::show_spec() {
	show_battery_life();
}

