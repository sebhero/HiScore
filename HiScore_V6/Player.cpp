#include "Player.h"

/*
 * Player.cpp
 *
 *  Created on: 17 jun 2013
 *      Author: seb
 */

#include "Player.h"

#include <string>
using namespace std;
/**
 * player model
 */
///player model
Player::Player() {
	// TODO Auto-generated constructor stub

}

/**
 * player model.
 * newName= name of player
 * newScore = player score
 */
Player::Player(string newName, int newScore) {
	this->name=newName;
	this->score=newScore;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

string Player::toString() {

	return to_string(this->getScore()) +"\t"+ this->getName();
}

