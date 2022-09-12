// Bagels Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool seek(string code, char c) {

	for (int i = 0; i < 3; i++) {
		if (c == code[i]) 
			return true;
	}
	return false;
}

void solve() {
	int val=0;
	for (int a = 0; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			for (int c = 0; c <= 9; c++) {
				val = a * 100 + b * 10 + c;
				cout << val<<endl;
			}
		}
	}
}

int main()
{
	
	string code = "249";

	string guess; 
	int fermy;
	int pico;
	int bagels;
	
	int attempts = 7;

	solve();

	/*do {

		fermy = 0;
		pico = 0;
		bagels = 0;

		cout << "enter code" << endl;

		cin >> guess;

		for (int i = 0; i < 3; i++) {

			if (code[i] == guess[i]) {
				fermy++;
			}

			if (seek(code, guess[i])) {
				
				pico++;
			}
		}

		

		if (pico == 0) {
			cout << "begels" << endl;
		}
		else if (pico == 3 && fermy==3) {
			cout << "You won!";
		}
		else {

			cout << fermy << "F" << pico - fermy << "P" << endl;
		}
		
		attempts++;

	} while (attempts > 7);*/
}