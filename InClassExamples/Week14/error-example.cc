#include<iostream>
#include<string>
#include<vector>
#include<exception>

using namespace std;

struct Thanksgiving_t {
	string name;
	int pieSliceCount;
	double weight;
};

class SpouseUpsetException : public exception {
public:
	virtual const char* what() const throw()
	{
		return "ERROR: Your spouse thinks you should eat less pie.";
	}	
};


void PopulateNameAndPieCount(Thanksgiving_t &rec) {
	cout << "What is your name? ";
	cin >> rec.name;

	cout << "How many slices of pie will you eat? ";
	cin >> rec.pieSliceCount;

	cout << "How much do you weigh? ";
	cin >> rec.weight;

	if ( (rec.weight > 240) && (rec.pieSliceCount > 1) ) 
		throw SpouseUpsetException();
}


int main() {
	vector<Thanksgiving_t> dinnerGuests;
	int numberOfGuests;
	int status = 0;
	cin.exceptions(istream::failbit);

	try {
		cout << "How many guests? ";
		cin >> numberOfGuests;
	} catch (ios_base::failure &e) {
		cerr << "I don't know what you said, but it's not a number" << endl;
		return 2;
	}


	for (int idx=0; idx<numberOfGuests; idx++) {
		try {
			Thanksgiving_t guest;
			PopulateNameAndPieCount(guest);
			dinnerGuests.push_back(guest);
		} catch (ios_base::failure &e) {
			cerr << "I couldn't undertand that last input.  So I'm ignoring it." << endl;
			status = 1;
			cin.clear();
			string junk;
			cin >> junk;
		}
		catch (SpouseUpsetException &e) {
			cerr << e.what() << endl;
		}
 		catch (exception &e) {
			cerr << "General error.  Stopping the input.  Check your input." << endl;
			status = 1;
			break;
		}		
	}

	for (auto guest: dinnerGuests)
  	   cout << "Hello " << guest.name << ".  Have a good Thanksgiving.  Enjoy your " 
	        << guest.pieSliceCount << " slices of pie!" << endl;

	return status;
}