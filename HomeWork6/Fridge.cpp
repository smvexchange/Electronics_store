#include <iostream>
#include "Fridge.h"

Fridge::Fridge(int volume, int weight) : Appliances(weight), volume_(volume) {}

void Fridge::show_volume() {
	std::cout << "Volume\t\t" << volume_ << std::endl;
}

void Fridge::show_spec() {
	std::cout << "--------------------" << std::endl;
	show_volume();
	show_weight();
	std::cout << "--------------------" << std::endl;
}


