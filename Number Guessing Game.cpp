#include <iostream>
#include <string>
#include<time.h>
#include<cstdlib>
#include <windows.h>

using namespace std;


int main()
{
   
	int num;
	int input;
	int attempts=0;
	bool is_correct = false;
	srand((unsigned)time(0));
	num = rand() % 100 + 1;
	cout << num << endl;
	

	while (!is_correct) {

		attempts++;

		cout << "Enter number:" << endl;

		cin>>input;

		if (input == num) {

			cout << "You won in " << attempts << " attempts";
			is_correct = true;
		}
		else {

			if (input < num) {
				cout << " Too low" << endl;
			}
			else {
				cout << "Too high"<<endl;
			}
		}
		
	}

}

