#ifndef VIDEOGAME_H_
#define VIDEOGAME_H_

#include<string>
#include<iostream>

#include <Game.h>

using namespace std;


class VideoGame : public Game {
public:
	VideoGame();
	VideoGame(string inName, int inNumPlayers, string inPlatform);

	string GetPlatform() const;
	void SetPlatform(string inPlatform);

	virtual void Print() const;

protected:
	string platform_;
};

#endif