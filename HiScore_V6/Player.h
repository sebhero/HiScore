#pragma once
/*
 * Player.h
 *
 *  Created on: 17 jun 2013
 *      Author: seb
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include <string>
#include "Printable.h"

using namespace std;

class Player : public Printable<Player>
{

private:
	string name;
	int score;
public:
	Player();
	Player(string,int);
	virtual ~Player();

	const string& getName() const {
		return name;
	}

	void setName(const string& name) {
		this->name = name;
	}

	int getScore() const {
		return score;
	}

	void setScore(int score) {
		this->score = score;
	}

	string toString();

};

#endif /* PLAYER_H_ */


