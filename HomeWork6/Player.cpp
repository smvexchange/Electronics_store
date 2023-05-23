#include <iostream>
#include "Player.h"

Player::Player(int total_track, int battery_life) : Device(battery_life), total_track_(total_track) {}

void Player::show_total_tracks() {
	std::cout << "Total track\t" << total_track_ << std::endl;
}

void Player::show_spec() {
	std::cout << "--------------------" << std::endl;
	show_total_tracks();
	show_battery_life();
	std::cout << "--------------------" << std::endl;
}
