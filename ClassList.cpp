//============================================================================
// Name        : Assignment1.cpp
// Author      : Ihab Mezerreg
// Description : Creates an array filled with random numbers.
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>

using namespace std;

class List {				// Each object has an array filled with ints and an int holding the length of that array
private:
	int list[10];
	int listLength;
public:
	List();					// The constructor of the class
	void print();			// Prints the array list of integers
	void fillWithRandom();	// Fills the array with random integers
};

int main() {
	List randomIntsOne;
	randomIntsOne.print();
	randomIntsOne.fillWithRandom();
	randomIntsOne.print();

	List randomIntsTwo;
	randomIntsTwo.print();
	randomIntsTwo.fillWithRandom();
	randomIntsTwo.print();
}

List::List() {				// Sets the private array to zero and the array length to 10
	listLength = 10;
	for(int i = 0; i < listLength; i++){
		list[i] = 0;
	}
}
void List::print() {		// Prints out the array
	for(int i = 0; i < listLength; i++){
		if(i == 0){
		cout << "List = [ " << list[i] << ",";
		} else {
			if(i > 0 && i<9){
				cout << " " << list[i] << ",";
			} else {
				if(i == 9){
					cout << " " << list[i] << "]" << endl;
				}
			}
		}
	}
}
void List::fillWithRandom() {	// Fills the array with random integers
	for(int i = 0; i < listLength; i++){
		list[i] = rand() % 100 + 1;
	}
}

/* Output:
*	List = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
*	List = [42, 68, 35, 1, 70, 25, 79, 59, 63, 65]
*	List = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
*	List = [ 6, 46, 82, 28, 62, 92, 96, 43, 28, 37]
*/