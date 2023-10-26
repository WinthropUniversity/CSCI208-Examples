
#include<SoccerPlayer.h>

SoccerPlayer::SoccerPlayer(string inName, double inAssists, double inGoals) : BasePlayer(inName), assists_(inAssists), goals_(inGoals) {
    cout << "SoccerPlayer constructor is run (name=" << inName 
                                << ", assists=" << inAssists << ")" 
                                << ", goals=" << inGoals << ")" 
                                << endl;
}

double SoccerPlayer::GetAssists() const {
    return assists_;
}

void SoccerPlayer::SetAssists(double inAssists) {
    assists_ = inAssists;
}

double SoccerPlayer::GetGoals() const {
    return goals_;
}

void SoccerPlayer::SetGoals(double inGoals) {
    goals_ = inGoals;
}

void SoccerPlayer::PrintRecord() const {
    cout << GetName() << " { " << GetAssists() << "," << GetGoals() << " } " << GetNumWins() << "/" << GetNumLosses() << "/" << GetNumDraws() << endl;
}

string SoccerPlayer::GetGameType() const {
    return "soccer";
}