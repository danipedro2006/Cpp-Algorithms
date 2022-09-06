

#include <iostream>
#include <string>
#include<time.h>
#include<cstdlib>
#include <windows.h>

using namespace std;

int coinToss();


int main()
{
    int head = 0;
    int tail = 0;
    float money = 0;
    int num;

    for (int i = 0; i < 50; i++) {
        num = coinToss();
        if (num == 1) {
            cout << "Heads" << endl;
            head++;
            money += 1.0;
        }
        else {
            cout << "Tails" << endl;
            tail++;
            money -= 1.0;
        }
        Sleep(100);
    }

    cout << "Total heads " << head << endl;
    cout << "Total tails " << tail << endl;
    cout << "Total winning $" << money << endl;



    return 0;
}


int coinToss() {
    int num;
    srand((unsigned) time(0));
    num = rand() % 2 + 1;
    return num;
};