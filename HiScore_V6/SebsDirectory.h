#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "BubbleSort.h"
#include "Player.h"


#define MAXSIZE 5
/*
	hanterar och håller alla object.
	databas/factory. Det är från här vi hämtar alla object.
*/
class SebsDirectory
{
	vector<Player> players;
	BubbleSort sortMethod;

public:
	SebsDirectory(void);
	~SebsDirectory(void);
	//generare lista med spelare.
	vector<Player> GenerateList();
	//visa en lista med spelare
	void DisplayList(vector<Player>& players);
	//visar listan
	void DisplayList();
	//lägger till listan.
	void SetPlayers(vector<Player>& players);
	//vanlig get funktion för att få ut listan av spelare.
	const vector<Player> GetPlayers();
	//lägger till en ny spelare och därefter sorterar listan.
	//ta bort oönskade spelare
	void AddPlayer(string name, string score);
	//sorterar listan. använder mig utav bubblesorten.
	void Sort();
};

