#include<iostream>
#include<string>
#include<vector>

#include <Game.h>
#include <VideoGame.h>
#include <BoardGame.h>

using namespace std;

int main() {
	// Put some games in a list
	vector<Game *> gamelist;
	gamelist.push_back(new BoardGame("Settlers of Catan", 4, 276));
	gamelist.push_back(new VideoGame("Asteroids", 1, "Everything"));
	gamelist.push_back(new VideoGame("Subnautica", 1, "Steam,Epic,XBox"));
	gamelist.push_back(new BoardGame("Monopoly", 4, 8));

	// Print all the games
	for (auto gameptr: gamelist)
		gameptr->Print();

	// Deallocate all games in the list
	for (auto gameptr: gamelist)
		if (gameptr) delete gameptr;

	return 0;
}