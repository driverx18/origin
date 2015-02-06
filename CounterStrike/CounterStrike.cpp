#include <iostream>

using namespace std;

int main()
{
    class Human {

    public:
    int health;
    int armor;
    int cash;
    char weapon[20];
    int skin;

    void sayAboutMe() {
        cout << "My health: " << health << ", armor: " << armor << ", cash: " << cash << endl;
    }

    };

    class Terrorist: public Human {


    bool bomb;


    };

    class CT: public Human {



    };

    return 0;
}
