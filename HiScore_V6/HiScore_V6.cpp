// HiScore_V6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "Player.h"

#include "SebsDirectory.h"

using namespace std;





int _tmain(int argc, _TCHAR* argv[])
{

	SebsDirectory dir;
	//generate demo list
	dir.GenerateList();
	//sort list
	dir.Sort();
	//show list
	dir.DisplayList();

	bool answear = true;
	string input;
	string newPlayerName;
	string newPlayerScore;

	map<string,bool> answearMap;
	answearMap["yes"]=true;
	answearMap["no"]=false;
	
	do
	{
		cout << "Do you want to enter a new name? (yes/no): ";
		cin >> input;
		//check if input is a valid input.
		if(answearMap.find(input) ==answearMap.end())
		{
			cout << "ERROR no valid input" << endl;
		}
		else
		{
			answear= answearMap[input];
			//answear is yes
			//ifall vs kunde refactor skulle jag bryt ut detta i en egen function.
			if(answear)
			{
				cout << "Player name: ";
				cin >> newPlayerName;
				cout << endl;
				cout << newPlayerName <<" score: ";
				cin >> newPlayerScore;
				//add player
				dir.AddPlayer(newPlayerName,newPlayerScore);
				//show list again.
				dir.DisplayList();

			}
			
		}
	}	while (answear);

	cout << "bye bye";

	return 0;
}



