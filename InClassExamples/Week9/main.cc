#include<iostream>
#include<string>
#include<vector>

#include <Game.h>
#include <VideoGame.h>

using namespace std;

int main() {
	// Put some games in a list
	vector<Game *> gamelist;
	gamelist.push_back(new Game("Settlers of Catan", 4));
	gamelist.push_back(new VideoGame("Asteroids", 1, "Everything"));
	gamelist.push_back(new VideoGame("Subnautica", 1, "Steam,Epic,XBox"));
	gamelist.push_back(new Game("Solitaire", 1));

	// Print all the games
	for (auto gameptr: gamelist)
		gameptr->Print();

	// Deallocate all games in the list
	for (auto gameptr: gamelist)
		if (gameptr) delete gameptr;

	return 0;
}