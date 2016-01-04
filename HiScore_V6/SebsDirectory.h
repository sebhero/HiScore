#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "BubbleSort.h"
#include "Player.h"


#define MAXSIZE 5
/*
	hanterar och h�ller alla object.
	databas/factory. Det �r fr�n h�r vi h�mtar alla object.
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
	//l�gger till listan.
	void SetPlayers(vector<Player>& players);
	//vanlig get funktion f�r att f� ut listan av spelare.
	const vector<Player> GetPlayers();
	//l�gger till en ny spelare och d�refter sorterar listan.
	//ta bort o�nskade spelare
	void AddPlayer(string name, string score);
	//sorterar listan. anv�nder mig utav bubblesorten.
	void Sort();
};

