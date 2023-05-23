#pragma once
#ifndef FRIDGE_H_
#define FRIDGE_H_
#include "Appliances.h"

class Fridge : public Appliances {
public:
	Fridge(int volume, int weight);
	void show_spec() override;
	void show_volume();

private:
	int volume_;
};

#endif FRIDGE_H_

