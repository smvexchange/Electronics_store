#pragma once
#ifndef IELECTRONICS_H_
#define IELECTRONICS_H_

class IElectronics {
public:
	IElectronics();
	virtual ~IElectronics();
	virtual void show_spec() = 0;
};

#endif IELECTRONICS_H_
