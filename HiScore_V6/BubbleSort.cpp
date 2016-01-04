#include "BubbleSort.h"


BubbleSort::BubbleSort(void)
{
}


BubbleSort::~BubbleSort(void)
{
}

void BubbleSort::SetVector(vector<Player> players)
{
	this->myVector = players;
}

vector<Player> BubbleSort::GetVector()
{
	return this->myVector;
}
vector<Player> BubbleSort::Sort(vector<Player> players)
{
	SetVector(players);
	return Sort();
}

vector<Player> BubbleSort::Sort()
{
	int array_size = myVector.size();
	Player keptPlayer;
	for (int passes = 0;  passes < array_size - 1;  passes++)
	{
		for (int j = 0;  j < array_size - passes - 1;  j++)
		{
			if (myVector[j].getScore() < myVector[j+1].getScore())
			{
			keptPlayer = myVector[j];
			myVector[j] = myVector[j+1];
			myVector[j+1]=keptPlayer;

			}
		}
	}  
	return this->myVector;
}