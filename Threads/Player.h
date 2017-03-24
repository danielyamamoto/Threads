#pragma once

class Player {
private:
	int lifes;
	static Player *myInstance;
	Player(int vidas = 10) {	lifes = vidas; }
	
public:
	//Player();
	//~Player();

	static Player *Instance();
	int addLifes();
	int subLifes();
};