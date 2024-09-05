#include<iostream>
#include<string>

using namespace std;

class Pet {
public:
  void Vocalize() const {
    cout << voice_ << "!! " << endl;
  }

  void SetVoice(string inVoice) {
    voice_ = inVoice;
  }

  string GetVoice() const {
    return voice_;
  }

  void SetNumberLegs(unsigned short int inLegCount) {
    numLegs_ = inLegCount;
  }

  unsigned short int GetNumberLegs() {
    return numLegs_;
  }

  void PrintInfo() const {
    cout << "Pet: " << endl;
    cout << "   Number of Legs = " << numLegs_ << endl;
    cout << "   Voice = " << voice_ << endl << endl;
  }


private:
  string voice_;
  unsigned short int numLegs_;
};



int main() {
    Pet dog, cat1, cat2, snake;

    dog.SetNumberLegs(4);
    dog.SetVoice("Bark");

    cat1.SetNumberLegs(4);
    cat1.SetVoice("Meow");

    cat2.SetNumberLegs(4);
    cat2.SetVoice("Hiss");

    snake.SetNumberLegs(0);
    snake.SetVoice("-");


    cout << "Here are my pets .... " << endl;
    dog.PrintInfo();
    cat1.PrintInfo();
    cat2.PrintInfo();
    snake.PrintInfo();

    cout << "The dog whenever anyone leaves or arrives --" << endl;
    for (int idx=0; idx<10; idx++)
      dog.Vocalize();
      
    return 0;
}