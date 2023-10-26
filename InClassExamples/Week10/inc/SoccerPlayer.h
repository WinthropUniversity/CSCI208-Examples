#ifndef SOCCERPLAYER_H_
#define SOCCERPLAYER_H_

#include<iostream>
#include<string>
#include<BasePlayer.h>

using namespace std;

class SoccerPlayer : public BasePlayer {
public:
    SoccerPlayer(string inName, double inAssists, double inGoals);

    virtual string GetGameType() const;
    
    virtual double GetAssists() const;
    virtual void SetAssists(double inAssists);

    virtual double GetGoals() const;
    virtual void SetGoals(double inGoals);

    // Override and change how print works
    virtual void PrintRecord() const;

private:
    double assists_;
    double goals_;
};


#endif
