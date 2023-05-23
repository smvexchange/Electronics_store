#pragma once
#ifndef PLAYER_H_
#define PLAYER_H_
#include "Device.h"

class Player : public Device {
public:
	Player(int total_track, int battery_life);
	void show_spec() override;
	void show_total_tracks();

private:
	int total_track_;
};

#endif PLAYER_H_

