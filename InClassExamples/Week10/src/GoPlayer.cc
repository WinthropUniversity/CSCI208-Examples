
#include<GoPlayer.h>

GoPlayer::GoPlayer(string inName, double inRank) : BasePlayer(inName), rank_(inRank) {
    cout << "GoPlayer constructor is run (name=" << inName << ", rank=" << inRank << ")" << endl;
}

double GoPlayer::GetRank() const {
    return rank_;
}

void GoPlayer::SetRank(double inRank) {
    rank_ = inRank;
}

void GoPlayer::PrintRecord() const {
    cout << GetName() << " { " << GetRank() << " } " << GetNumWins() << "/" << GetNumLosses() << "/" << GetNumDraws() << endl;
}

string GoPlayer::GetGameType() const {
    return "go";
}