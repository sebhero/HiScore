#include "SebsDirectory.h"


SebsDirectory::SebsDirectory(void)
{
}


SebsDirectory::~SebsDirectory(void)
{
}

vector<Player> SebsDirectory::GenerateList()
{
	//borde ha en store lista med flera namn som jag slumpar fram.... men det ar bara for testing.
	string names[MAXSIZE] = {"sebastian","jonas","sara","sophia","lars"};

	vector<Player> tempVec;
	for(int i =0; i<MAXSIZE; i++)
	{
		tempVec.push_back(Player(names[i],((i+1)*500)));
	}
	this->players = tempVec;
	return tempVec;
}

void SebsDirectory::DisplayList()
{

	for(Player pl : players)
	{
			cout << pl << endl;
	}
}

void SebsDirectory::DisplayList(vector<Player>& players)
{
		for(Player pl : players)
	{
			cout << pl << endl;
	}
}

void SebsDirectory::SetPlayers(vector<Player>& players)
{
	this->players=players;
}

const vector<Player> SebsDirectory::GetPlayers()
{
	return this->players;
}

//lägger till en ny spelare till listan
void SebsDirectory::AddPlayer(string inputName, string inputScore)
{
	int score = atoi(inputScore.c_str());
	this->players.push_back(Player(inputName,score));
	Sort();
}

//sorterar listan
void SebsDirectory::Sort()
{
	this->players = this->sortMethod.Sort(this->players);
	//ifall listan är mer än 5. ta bort den sista.
	if(players.size() >5)
	{
		players.pop_back();
	}
}

