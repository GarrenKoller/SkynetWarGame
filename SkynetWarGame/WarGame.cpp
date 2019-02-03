///////////////////////////*include*////////////////////////////////////////
//text
#include <string>
//in and out stream to console
#include <iostream>
//C Standard General Utilities Library
#include <cstdlib>
//clock time
#include <ctime>
//random Rnum generator 
#include <random>

///////////////////////*using*/////////////////////////////////////////
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
//////////////////////*Start Main()*///////////////////////////////////////////


int main() {
	//Welcome
	cout << "Welcome to SkyNet \n";
	system("pause");
	cout << "\n";
	//delacreing the seed of rand()
	srand(time(0) - 64);
	//calculating a random Rnum 
	int Rnum = ((rand() % 64) + 1);
	//grid size	 
	int lower = 1;
	int upper = 64;
	//delacreing the seed of rand()
	srand(time(0) - 64);
	//Binary Number Count
	int Bnum = 0;
	//Human Number Count
	int Hnum = 0;
	//Number guessed
	int guess;
	//restart program
	char choice = 'y';

	//while somrthing is or isnt happening do this
			while (choice != 'n'){
				////////////////*Binary functions*/////////////////////////////////////////
				while (upper >= lower) {
					//Binary search
					int Bsearch = ((upper - lower) / 2) + lower;
					//if this happens do this
					if (Bsearch < Rnum) {
						//increment Bnum 
						++Bnum;
						//perform
						lower = lower + Bsearch;
					}
					if (Bsearch > Rnum) { 
						++Bnum;
						upper = upper - Bsearch;
					}
					//after the if, run this and determine if this if is correct then run this if
					else if (Bsearch = Rnum) {
				////////////////////////////////////////////////////////////////////////////////
				//delacreing the seed of rand()
				srand(time(0) - 64);
				//calculating a random Rnum 
				int Rnum = ((rand() % 64) + 1);
				//guess
				cout << "Find the correct location guess between 1-64. ";
				cin >> guess;
				//while guess does not = Rnum
				while (guess != Rnum)
				{
				//if guess was higher
					if (guess > Rnum)
					{
				//increment Hnum
						++Hnum;
						cout << "Too high, try again: ";
						cin >> guess;
					}
					// if guess is lower than Rnum
					else if (guess < Rnum)
					{
					//increment Hnum
						++Hnum;
						cout << "Too low, try again: ";
						cin >> guess;

					}
				}
				//if guess = Rnum do this
				if (guess == Rnum)
				{
					++Hnum;
					//displaying
					cout << "Correct! \n";
					cout << Bnum << " Binary search(s) preformed \n";
					cout << Rnum << " linear search(s) preformed \n";
					cout << Hnum << " Human search(s) preformed \n";
					
					system("pause");
					cout << "\n";
			
				}
				//do checks the condition of the while loop
				do
				{
					//set Hnum and Bnum to zero
					Hnum = 0;
					Bnum = 0;
					cout << "Play again? y/n: ";
					cin >> choice;
					//ends program or starts another game
				} while (choice != 'y' && choice != 'n');
			}
			
			
		}
	}
	return 0;
}




	
