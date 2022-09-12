#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
    char roll;
    int sum;
    int dice1, dice2;
   

    cout << "Press R to roll the dice" << endl;
    cin >> roll;

    if (roll == 'R' || roll == 'r') {

        while (true) {

            srand(time(NULL));

            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;
            sum = dice1 + dice2;
            cout << sum << endl;
            if (sum == 7 || sum ==11) {
                cout << "You win" << endl;
             }

            if (sum == 2 || sum == 3 || sum == 12) {
                cout << "You lost" << endl;
            }

            if (sum == 4 || sum == 5 || sum == 6 || sum == 8 || sum == 9 || sum == 10) {
                continue;
            }
            else {
                break;
            };
        };

    };
   
}