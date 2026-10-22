#include "Game.h"


Game::Game() {
	name_ = "Nothing";
	numPlayers_ = 0;
}

Game::Game(string inName, int inNumPlayers) {
	SetName(inName);
	SetNumPlayers(inNumPlayers);
}

string Game::GetName() const {
	return name_;
}

void Game::SetName(string inName) {
	name_ = inName;
}

int Game::GetNumPlayers() const {
	return numPlayers_;
}

void Game::SetNumPlayers(int inNumPlayers) {
	if (inNumPlayers < 0) numPlayers_ = -inNumPlayers;
	else                  numPlayers_ = inNumPlayers;
}

void Game::Print() const {
	cout << endl;
	cout << GetName() << " for " 
	     << GetNumPlayers() << " players" << endl;
}
