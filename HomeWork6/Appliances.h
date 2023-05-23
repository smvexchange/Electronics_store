#pragma once
#ifndef APPLIANCES_H_
#define APPLIANCES_H_
#include "IElectronics.h"

class Appliances: virtual public IElectronics {
public:
	Appliances(int weight);
	void show_spec() override;
	void show_weight();

protected:
	int weight_;
};

#endif APPLIANCES_H_