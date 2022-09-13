#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


int main()
{

	srand(time(0));
	const int size = 60;
	cout << "Enter a letter to begin\n";
	char x; cin >> x;
	int pos = size / 2;
	while (true) {
		cout << "|START|";

		for (int i = 0; i < size; i++) {
			if (i == pos) {
				cout << x;
			}
			else {
				cout << " ";
			}
		}

		cout << "|FINISH|" << endl;;

		int move = rand() % 3 - 1;

		pos = pos + move;
		if (pos < 1) {
			cout << "You could not finish the race"<<endl;
			break;
		}

		if (pos > size - 1) {
			cout << "Congrats. You finished the race!"<<endl;
			break;
		}
		system("cls");

		for (int sleep = 0; sleep < 1000; sleep++);
	}
	return 0;
}
