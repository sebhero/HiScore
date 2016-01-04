#pragma once
#include <vector>
#include "Player.h"

using namespace std;
class BubbleSort
{

private:
	vector<Player> myVector;

public:
	BubbleSort(void);
	~BubbleSort(void);

	void SetVector(vector<Player> players);
	vector<Player> GetVector();
	vector<Player> Sort();
	vector<Player> Sort(vector<Player> players);
};

