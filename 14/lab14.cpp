//derek cook
//cs 1337
//lab 14

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Derek Cook - CS 1337 - Lab 14\n\n";

int main()
{
	uint ssn;
	uint aaa; //first 3
	uint gg; //last 4
	uint ss; //middle 2
	
	//output ID line
	cout << ID;
	
	//read an unknown # of unit from standard input, letting
	//each represent a SSN
	cout << setfill('-') << setw(23) << '-' << setfill (' ') << endl;
	cout << "  Input      Formatted" << endl;
	cout << setfill('-') << setw(23) << '-' << setfill (' ') << endl;
	while (cin >> ssn)
	{
		cout << setfill('0') << setw(9) << ssn <<"   ";
		//comput aaaa,gg,ssss
		aaa = (ssn / 1000000) % 1000;
		gg = ssn % 10000;
		ss = (ssn / 10000) % 100;
		cout << setfill('0') << setw(3) << aaa << '-';
		cout << setfill('0') << setw(2) << ss << '-';
		cout << setfill('0') << setw(4) << gg << endl;
	}
	//footer
	cout << setfill('-') << setw(23) << '-' << setfill (' ') << endl;
	
	return 0;
}