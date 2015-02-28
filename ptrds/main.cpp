#include <iostream>

using namespace std;

int main()
{

    struct Worker {
        char name[30];
        int id;
        int salary;
    };

    Worker igor, *ps;

    ps = &igor;

    ps->id = 15135429;
    ps->salary = 1500;
    cout << igor.id << igor.salary;


    return 0;
}
