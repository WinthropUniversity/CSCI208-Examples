#include <VideoGame.h>

VideoGame::VideoGame() {
	SetName("Nothing");
	SetNumPlayers(0);
	SetPlatform("None");
}


VideoGame::VideoGame(string inName, int inNumPlayers, string inPlatform) {
	SetName(inName);
	SetNumPlayers(inNumPlayers);
	SetPlatform(inPlatform);
}

string VideoGame::GetPlatform() const {
	return platform_;
}

void VideoGame::SetPlatform(string inPlatform) {
	platform_ = inPlatform;
}

void VideoGame::PrintSpecifics() const {
	cout << "   Platforms: " << GetPlatform() << endl;
} 