#ifndef GOPLAYER_H_
#define GOPLAYER_H_

#include<iostream>
#include<string>
#include<BasePlayer.h>

using namespace std;

class GoPlayer : public BasePlayer {
public:
    GoPlayer(string inName, double inRank);

    virtual string GetGameType() const;
    
    virtual double GetRank() const;
    virtual void SetRank(double inRank);

    // Override and change how print works
    virtual void PrintRecord() const;

private:
    double rank_;
};


#endif
