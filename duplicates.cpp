
// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool hasDuplicates(vector<int> list) {
   //Complete this function
}


void removeDuplicates(vector<int>& list) {
   //Complete this function
}


int main()
{
	srand(unsigned(time(0)));

	vector<int> numbers;

	//Create a display the starting list
	cout << "Starting List: ";
	for (int i = 0; i < 10; i++) {
		int num = rand() % 35;
		cout << num << " ";
		numbers.push_back(num);
	}
	cout << endl << endl;


	//If the list has duplicates, remove them
	bool result = hasDuplicates(numbers);

	if (result == false) {
		cout << "No duplicates, list is final" << endl << endl;
	}
	else {
		cout << "Removing duplicates..." << endl;
		removeDuplicates(numbers);


		cout << endl << endl << "Final List: ";
		for (int i = 0; i < numbers.size(); i++) {
			cout << numbers[i] << " ";
		}
		cout << endl << endl;

	}

	system("pause");
}
