#pragma once
#ifndef DEVICE_H_
#define DEVICE_H_
#include "IElectronics.h"

class Device : virtual public IElectronics {
public:
	Device(int battery_life);
	void show_spec() override;
	void show_battery_life();

protected:
	int battery_life_;
};

#endif DEVICE_H_

