#include "Player.h"

//Player::Player() {
//
//}
//
//Player::~Player() {
//
//}

Player * Player::Instance() {
	if (!myInstance) { myInstance = new Player; }
	return myInstance;
}

int Player::addLifes() {
	if (lifes > 0) { lifes += 1; }
	return lifes;
}

int Player::subLifes() {
	if (lifes >= 1) { lifes -= 1; }
	return lifes;
}