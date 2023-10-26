#ifndef BASEPLAYER_H_
#define BASEPLAYER_H_

#include<string>
#include<iostream>

using namespace std;


class BasePlayer {
public:
    BasePlayer(string inName);
    BasePlayer(string inName, int inWins, int inDraws, int inLosses);

    virtual string GetGameType() const = 0;  // This is an *abstract* method

    virtual string GetName() const;
    virtual int GetNumWins() const;
    virtual int GetNumDraws() const;
    virtual int GetNumLosses() const;

    virtual void WonAGame();
    virtual void DrewAGame();
    virtual void LostAGame();

    virtual void PrintRecord() const;

protected:
    string name_;
    int numWins_;
    int numDraws_;
    int numLosses_;
};


#endif