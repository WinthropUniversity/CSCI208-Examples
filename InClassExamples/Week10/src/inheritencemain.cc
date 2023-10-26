#include<GoPlayer.h>
#include<SoccerPlayer.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void PrintAllRecords( vector<BasePlayer*> list ) {
    cout << endl << "GAME RECORDS: " << endl;
    for (int idx=0; idx<list.size(); idx++)
      list[idx]->PrintRecord();
    cout << endl;
}


int main() {
    string tmpName = "";
    int tmpNum = 0;

    vector<BasePlayer*> playerList;

    while (tmpName != "quit") {
        cout << "Name (quit if done): ";
        cin >> tmpName;

        if (tmpName != "quit") playerList.push_back( new GoPlayer(tmpName, 1.0) );
    }

    playerList.push_back( new SoccerPlayer("Kade", 2, 1) );
    
    playerList[0]->WonAGame();
    playerList[1]->LostAGame();

    PrintAllRecords(playerList);

    // EVerything is okay
    return 0;
}