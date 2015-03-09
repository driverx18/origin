#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {

   struct candyBar {

    char name[20];
    float weight;
    int cal;

   };

    candyBar *snack = new candyBar;
    strcpy(snack->name, "Mocha Munch");
    snack->weight = 2.3;
    snack->cal = 350;

    cout << snack->name << " " << snack->weight << " " << snack -> cal << endl;


    return 0;
}



