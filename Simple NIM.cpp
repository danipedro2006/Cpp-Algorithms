

#include <iostream>
#include <string>
#include<time.h>
#include<cstdlib>
#include <windows.h>

using namespace std;




int main()
{
    int num_objects = 23;
    int current_player = 1;
    int move;
    cout << "There are 23 objects. Remove 1 upt to 3 objects. That who cannot move lost.";

    do {
        if (current_player == 1) {
            cout << "Player 1 enter your move (1-3): ";
            cin >> move;
        }
        else {
            do {
                move = 1 + rand() % 3;
            } while (move < 1 || move >3);
            cout << "Computer removed " << move << endl;
        }

        num_objects -=move;
        cout << num_objects << " remaining" << endl;
        current_player = (current_player++) % 2;

    } while (num_objects > 0);

    cout << "Player "<< current_player << " wins!!!"<< endl;

    return 0;
}


