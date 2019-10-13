#include <iostream>
#include <string>
using namespace std;

class Airlines {
	public:	
	
		void setAirlineName(string x) {
			name = x;
		}
		
		string getAirlineName() { // Method not used
			return name;
		}
		
	private:
	string name; // Name of airline
	
};

int main() {
	
	string airlineName;
	int userVal;
	
	cout << "What airline would you like to book on?: " << endl;
	cout <<"(1) American" << endl;
	cout <<"(2) United" << endl;
	cout <<"(3) Delta" << endl << endl;
	cout << "Enter:";
	
	cin>>userVal;
	if (userVal == 1) {
		airlineName = "American";
	}
	if (userVal == 2) {
		airlineName = "United";
	}
	if (userVal == 3) {
		airlineName = "Delta";
	}
	else {
		cout<<"You have entered an invalid response! Try again!";
		return 0;
	}
	
	Airlines airline; // Create Airline Object
	airline.setAirlineName(airlineName); 
	
	cout<<"Congraulations! You have booked on " + airlineName +"!" << endl;
}
