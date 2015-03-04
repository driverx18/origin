
#include <iostream>
#include <string>

using namespace std;

static int a;
static int balance = 10;
static int arrayofNumbers[] = {153,146,121,167,117,151,185,170,191,194,242,240,111,155,124,222,241,204,130,243,200,216,227,223,226,203,277,211,356,333,336,341,337,382,331,372,377,392,230,401,442,448,447,423,428,402,429,477,444,422,511,577,524,528,552,523,563,515,555,525,557,502,564,653,651,604,772,707,776,777,752,788,714,701,702,703,723,770,449,425,482,101,102,103,104,105,106,107,108,109,110,202,203,204,205,206,207,208,209,210};
static bool agree = true;
static string foragree;

// -- proto of function --
void play();
// -- proto of function --
void newgame();
int main()
{

    srand(time(NULL));
    system("color 27"); // change color of the system window

    newgame();

    cout << endl << "Your balance: " << balance << endl << endl;
    if(balance == 0) cout << endl << "\t-----The End-----" << endl;

    return 0;
}

void play() {

    a = arrayofNumbers[rand() % 100];


    if(a == 111) balance += 6;
    if(a == 222 || a == 227 || a == 277) balance += 11;
    if(a == 333 || a == 337 || a == 377) balance += 16;
    if(a == 444 || a == 447 || a == 477) balance += 51;
    if(a == 555 || a == 557 || a == 577) balance += 101;
    if(a == 777) balance += 201;

}

void newgame() {
     while(balance > 0 && agree == true) {
        cout << "Balance: " << balance << endl;
        cout << "Last number: " << a << endl << endl;

        cout << "Do you want to play? (type Y if YES, D for DOUBLE game and N if NO)" << endl;
        cin >> foragree;

        // IF YES
        if(foragree == "Y" || foragree == "y") {
        agree = true;
        balance--;
        play();
        system("cls");
        }
        // IF YES

        // IF DOUBLE GAME
        if(foragree == "D" || foragree == "d") {
            agree = true;

            for(int i = 0; i < 2; i++) {
                    balance--;
                    play();
            }
                system("cls");

        }
        // IF DOUBLE GAME

        // IF NO
       if(foragree == "N" || foragree == "n") {
            agree = false;
            system("cls");
            }
        // IF NO
    }

}
