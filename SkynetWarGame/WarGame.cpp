/////////////////////////////////////////////////////////////////////////////
//text
#include <string>
//in and out stream to console
#include <iostream>
//C Standard General Utilities Library
#include <cstdlib>
//clock time
#include <ctime>
//random number generator  
#include <random>

////////////////////////////////////////////////////////////////////////////
//end of line
using std::endl;
//console out
using std::cout;
//console in
using std::cin;
// string text   
using std::string;
//time clock
using std::time;
////////////////////////////////////////////////////////////////////////////
int main() {
	//grid size	 
	int lower = 1;
	int upper = 64;
	//delacreing the seed of rand()
	srand(time(0) - 64);
	//calculating a random number 
	int number = ((rand() % 64) + 1);
	int linear
	////////////////////////////////////////////////////////////////////////////
	//console out
	cout << "Welcome to SkyNet \n";
	system("pause");
	cout << "\n";

	////////////////////////////////////////////////////////////////////////////
	//while somrthing is or isnt happening do this
	while (upper >= lower) {
		int search = ((upper - lower) / 2) + lower;
		////////////////////////////////////////////////////////////////////////////
		//console out
		cout << "Location " << search << " has been searched \n";

		////////////////////////////////////////////////////////////////////////////
		//if this happens do this
		if (search < number) {
			lower = lower + search;
			cout << "The number that has been randomly selected is in the upper region.\n ";
			cout << "Now searching agian.\n ";
			system("pause");
			cout << "\n";
		}

		////////////////////////////////////////////////////////////////////////////
		//if this happens do this
		if (search > number) {
			upper = upper - search;
			cout << "The number that has been randomly selected is in the lower region.\n ";
			cout << "Now searching agian.\n ";
			system("pause");
			cout << "\n";
		}

		////////////////////////////////////////////////////////////////////////////
		//after the if, run this and determine if this if is correct then run this if
		else if (search = number) {
			cout << "Your number was " << search << "\n\n";
			system("pause");
			cout << "\n";
			//return or stop program			
			return 0;
		}
	}
	//return or stop program	
	return 0;

}