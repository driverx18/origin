#include <iostream>


using namespace std;

int main()
{
    struct Person {


    int age;

    public:
    string name;

    void message() {
        age++;
        cout << "Hurray! " << age << " years!";
    }
    } Katrin;




    Katrin.name = "Kate";

    Katrin.message();

    return 0;
}
