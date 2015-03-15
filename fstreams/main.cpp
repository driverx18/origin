#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream fout;

    fout.open("d://cpps.txt");

    fout << "I love Luda";

    fout.close();

    return 0;
}
