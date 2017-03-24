#include "Player.h"
#include <thread>
#include <iostream>

Player *Player::myInstance = 0;

void funAdd() {
	Player::Instance()->addLifes();
	std::cout << "Life Added \n" << Player::Instance()->addLifes() << '\n';
}

void funSub() {
	Player::Instance()->subLifes();
	std::cout << "Life Decreased \n" << Player::Instance()->subLifes() << '\n';
}

void main(void) {

	while (true) {
		std::cout << "Iniciando threads\n";
		std::thread addLifeThread = std::thread(funAdd);
		addLifeThread.detach();
		std::thread subLifeThread = std::thread(funSub);
		subLifeThread.detach();

	}
	std::cout << "Terminando threads\n";
	getchar();
}