#include <iostream>

using namespace std;

int main()
{

    int d[3] = {5,78,224};
    int *pd = &d[0];

    (*pd)++;
    cout << *pd << endl;

    return 0;
}
