#include<BoardGame.h>

BoardGame::BoardGame() {
	SetName("Nothing");
	SetNumPlayers(0);
	SetNumPieces(0);
}

BoardGame::BoardGame(string inName, int inNumPlayers, int inNumPieces) {
	SetName(inName);
	SetNumPlayers(inNumPlayers);
	SetNumPieces(inNumPieces);
}

int BoardGame::GetNumPieces() const {
	return numPieces_;
}

void BoardGame::SetNumPieces(int inNumPieces) {
	if (inNumPieces < 0) numPieces_ = -inNumPieces;
	else                 numPieces_ = inNumPieces;
}

void BoardGame::PrintSpecifics() const {
	cout << "   NumPieces: " << GetNumPieces() << endl;
}