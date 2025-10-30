#include <iostream>
using namespace std;

int main(void) {
	srand(time(0));

	int numbers[10];

	for (int i = 0; i < 10; i++) {
		numbers[i] = rand() % 10000;

		//ensures all numbers are 4 digit
		if (numbers[i] < 1000) {
			numbers[i] += 1000;
		}
	}


	cout << "The random integers: ";
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << "  ";
	}
	cout << endl;


	cout << "\nEven indices: ";
	for (int i = 0; i < 10; i += 2) {
		cout << numbers[i] << "  ";
	}
	cout << endl;


	cout << "\nEven values: ";
	for (int i = 0; i < 10; i++) {
		if (numbers[i] % 2 == 0) {
			cout << numbers[i] << "  ";
		}
	}
	cout << endl;


}