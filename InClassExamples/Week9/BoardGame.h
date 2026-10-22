#ifndef BOARDGAME_H_
#define BOARDGAME_H_

#include<iostream>
#include<string>

#include<Game.h>

using namespace std;

class BoardGame : public Game {
public:
	BoardGame();
	BoardGame(string inName, int inNumPlayers, int inNumPieces);

	int GetNumPieces() const;
	void SetNumPieces(int inNumPieces);

protected:
	int numPieces_;

	virtual void PrintSpecifics() const;
};

#endif