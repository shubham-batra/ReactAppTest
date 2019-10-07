// This Program will relate to something with Montreal.
#include <iostream>
#include <string>
using namespace std;

class Canada {

private:
	int a;
	int b;
	string f;

public:
	Canada() { // Default Constructor
		cout<<"You are in Montreal";
	}
	Canada(int a, int b) { // Overloaded Constructor
		this->a = a;
		this->b = b;
		int c = a + b;
		cout<<c;
	}
	Canada(int a, string f) { // 2nd OverLoaded Constructor
		this->a = a;
		this->f = f;
		cout<<"The number is "<< a << " and the string is " << f << ".";
	}


};


int main() {
	Canada();
	cout<<"\n";
	Canada(2,3);
	cout<<"\n";
	Canada(4,"Hello");
}
