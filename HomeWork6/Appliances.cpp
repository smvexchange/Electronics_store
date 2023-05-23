#include <iostream>
#include "Appliances.h"

Appliances::Appliances(int weight) : weight_(weight) {}

void Appliances::show_weight() {
	std::cout << "Weight\t\t" << weight_ << std::endl;
}

void Appliances::show_spec() {
	show_weight();
}
