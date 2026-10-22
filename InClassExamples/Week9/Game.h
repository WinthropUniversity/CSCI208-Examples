#ifndef GAME_H_
#define GAME_H_

#include<string>
#include<iostream>

using namespace std;

class Game {
public:
	Game();
	Game(string inName, int inNumPlayers);

	string GetName() const;
	void SetName(string inName);

	int GetNumPlayers() const;
	void SetNumPlayers(int inNumPlayers);

	virtual void Print() const;

protected:
	string name_;
	int numPlayers_;
};


#endif