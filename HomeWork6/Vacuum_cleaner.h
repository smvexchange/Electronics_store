#pragma once
#ifndef VACUUM_CLEANER_H_
#define VACUUM_CLEANER_H_
#include "Appliances.h"
#include "Device.h"

class Vacuum_cleaner : public Appliances, Device { 
public:
	Vacuum_cleaner(int power, int weight, int battery_life);
	void show_spec() override;
	void show_power();

private:
	int power_;
};

#endif VACUUM_CLEANER_H_

