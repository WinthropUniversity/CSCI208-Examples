#include<iostream>
#include<string>

#include "node.h"

using namespace std;

int main() {
    Node* dummyHeadNodePtr = new Node();
    string tempName;
    int tempRating;
    string done = "no";

    do {
        cout << "Name a video game: ";
        cin >> tempName;
        cout << "How would you rate this? ";
        cin >> tempRating;

        Node* newNodeToAdd = new Node(tempName, tempRating);
        Node* tempPtr = dummyHeadNodePtr->GetNextNodeRef();
        dummyHeadNodePtr->SetNextNodeRef(newNodeToAdd);
        newNodeToAdd->SetNextNodeRef(tempPtr);
        //newNodeToAdd->SetNextNodeRef(dummyHeadNode->GetNextNodeRef());
        //dummyHeadNode->SetNextNodeRef(newNodeToAdd);

        cout << "Are you done? ";
        cin >> done;
    } while (done != "yes");

    Node* curr = dummyHeadNodePtr->GetNextNodeRef();
    while (curr != NULL) {
        cout << curr->GetVideoGame() << ", " << curr->GetRating() << endl;
        curr = curr->GetNextNodeRef();
    }
    
    /*Node myFirstNode;
    Node *mySecondNodePtr = new Node("PacMan", 8);  
    string tempName;
    int tempRating;

    cout << "Name a video game: ";
    cin >> tempName;
    cout << "How would you rate this? ";
    cin >> tempRating;

    myFirstNode.SetVideoGame(tempName);
    myFirstNode.SetRating(tempRating);

    cout << "--------------" << endl;
    cout << myFirstNode.GetVideoGame() << ", " << myFirstNode.GetRating() << endl;
    cout << (*mySecondNodePtr).GetVideoGame() << ", " << mySecondNodePtr->GetRating() << endl;
    */

    /*string *myNamePtr = new string;
    string favoriteComputerLanguage;

    cout << "What is your name? ";
    cin >> *myNamePtr;

    cout << *myNamePtr << " is a great name!" << endl;    

    cout << "What is your favorite computer language? ";
    cin >> favoriteComputerLanguage;

    cout << myNamePtr << " is where the name string is stored." << endl;    
    cout << &favoriteComputerLanguage << " is where the language string is stored." << endl;    

    delete myNamePtr;
    myNamePtr = NULL;
    cout << myNamePtr << " (v2) is where the name string is stored." << endl;    
    *myNamePtr = "foo";*/

    // Everything is okay!
    return 0;
}