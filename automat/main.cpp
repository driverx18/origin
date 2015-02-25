#include <iostream>
#include <string>

using namespace std;

int a;
int balance = 10;
int arrayofNumbers[] = {153,167,117,185,194,111,155,124,222,204,216,227,223,226,277,211,356,333,337,382,372,377,230,442,448,447,428,429,477,444,422,511,577,524,528,563,515,555,525,557,653,772,776,777,752};
bool agree = true;
string foragree;

// -- proto of function --
void play();
// -- proto of function --

int main()
{
    srand(time(NULL));
    system("color 27"); // change color of the system window

    while(balance > 0 && agree == true) {
        cout << "Balance: " << balance << endl;
        cout << "Last number: " << a << endl << endl << endl;
        cout << "Do you want to play? (type Y if YES, D for DOUBLE game and N if NO)" << endl;
        cin >> foragree;

        if(foragree == "Y" || foragree == "y") {
        agree = true;
        balance--;
        play();
        cout << "Number is " << a << ", Your balance is: " << balance << endl;

        system("cls");
        }

        if(foragree == "D" || foragree == "d") {
            agree = true;


            for(int i = 0; i < 2; i++) {
                    balance--;
                    play();
                    cout << "Number is " << a << ", Your balance is: " << balance << endl;
            }
    system("cls");

        }

       if(foragree == "N" || foragree == "n") {
            agree = false;
            system("cls");
            }
    }

    cout << endl << "Your balance: " << balance << endl << endl;
    if(balance == 0) cout << endl << "\t-----The End-----" << endl;
    return 0;
}

void play() {


    a = arrayofNumbers[rand() % 45];


    if(a == 111) balance += 6;
    if(a == 222 || a == 227 || a == 277) balance += 11;
    if(a == 333 || a == 337 || a == 377) balance += 16;
    if(a == 444 || a == 447 || a == 477) balance += 51;
    if(a == 555 || a == 557 || a == 577) balance += 101;
    if(a == 777) balance += 201;

}
