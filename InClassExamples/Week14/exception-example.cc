#include<iostream>
#include<string>
#include<exception>

using namespace std;


class BigIndexError : public exception {
public:
	BigIndexError(unsigned int inN) : loopMax_(inN) {}
	unsigned int GetLoopMax() {return loopMax_;}
	virtual const char *what() throw() {
		return "ERROR:  The index for the loop got too big for me!!";
	}
private:
	unsigned int loopMax_;
};


void DoCoolLoopThing(unsigned int n) {
	cout << " Started the DoCoolLoopThing" << endl;
	for (int idx=0; idx<n; idx++) {
		cout << "  idx=" << idx << endl;

		if (idx > 7) throw BigIndexError(idx);
	}

	cout << " Ended the DoCoolLoopThing" << endl;
}

int main() {
	cout << "BEGIN BEGIN BEGIN BEGIN" << endl;

	try {
  	    DoCoolLoopThing(15);
	} catch (BigIndexError &e) {
		cerr << e.what() << ".  We got to index " << e.GetLoopMax() << " before stopping!" << endl;
	}

	cout << "END END END END" << endl;
	return 0;
}