#include<BasePlayer.h>

BasePlayer::BasePlayer(string inName) {
    name_ = inName;
    numWins_ = 0;
    numDraws_ = 0;
    numLosses_ = 0;

    cout << "BasePlayer constructor is run (name=" << inName << ")" << endl;
}

BasePlayer::BasePlayer(string inName, int inWins, int inDraws, int inLosses)  {
    name_ = inName;
    numWins_ = inWins;
    numDraws_ = inDraws;
    numLosses_ = inLosses;
}

string BasePlayer::GetName() const {
    return name_;
}

int BasePlayer::GetNumWins() const {
    return numWins_;
}

int BasePlayer::GetNumDraws() const {
    return numDraws_;
}

int BasePlayer::GetNumLosses() const {
    return numLosses_;
}


void BasePlayer::WonAGame() {
    numWins_++;
}

void BasePlayer::DrewAGame() {
    numDraws_++;
}

void BasePlayer::LostAGame() {
    numLosses_++;
}

void BasePlayer::PrintRecord() const {
    cout << GetName() << " " << GetNumWins() << "/" << GetNumLosses() << "/" << GetNumDraws() << endl;
}
