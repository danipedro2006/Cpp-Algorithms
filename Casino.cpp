#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

char choice;

int main()
{
    int balance=100;
   
    int guess;
    int dice;
    int bettingAmount=0;

    string playerName;
    char choice='y';
    bool isRunning=true;
    

    srand(time(0));

    cout << "\n\t ============== WELCOME TO CASINO WORLD =================" << endl;
     
    cout << "Enter your name: ";
    cin >> playerName;
    rules();
    do {
        system("cls");
        cout << "Your current balance is: " <<balance;
        //get player bet
                
            char choice=false;

            cout << "\n\nHei " << playerName << " enter the amount to bet: $ ";

            cin >> bettingAmount;

            cout << "Guess any betting number between 1 and 9\n";

            cin >> guess;

            dice = rand() % 6 + 1;

            if (dice == bettingAmount) {

                balance += bettingAmount * 10;
                cout << "\n\n You are in luck! You have won " << bettingAmount * 10;


            }
            else {
                cout << "\n\n Bad luck! Maybe next time. You lost " << bettingAmount * 10;

                balance -= bettingAmount * 10;

                if (balance <= 0) {

                    cout << "You lost! You have no many to pay";
                    break;

                }
                else {

                cout << "\n\n You have balance of:$ " << balance;
                
                }
                               
            };

        cout << "Do you want to play again? (Y / y) ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            continue;
        }
        else {
            break;
        }
    } while (true);

    std::cout << "\n\nThanks for playing. Your balance is:$ "<<balance<<" Good  bye!\n";
}

void rules() {
    system("cls");
    cout << "\t\t===== CASINO GAME RULES =====\n\n";
    cout << "\t1.Choose a number between 1 to 9\n";
    cout << "\t2.Winner gets 10 times of the mmoney bet\n";
    cout << "\t3.Wrong bet and you lose the amount you bet\n\n";
}

