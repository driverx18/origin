#include <iostream>

using namespace std;

int main()
{

    /* Pods4itat' koli4estvo par sosednix elementov s odinakovimi zna4eniyami */
    int sizer = 10;
    int *arr = new int[sizer];
    int *counter = new int;
    *counter = 0;
    for(int i = 0; i < sizer; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < sizer; i++) {
        cout << arr[i] << "  ";
    }

    for(int i = 0; i < sizer; i++) {
        if(arr[i] == arr[i+1]) (*counter)++;
    }

    cout << endl << "Sosedi elementi povtoryautsa " << *counter << " raz(a)" << endl;

    delete counter;
    delete [] arr;
    return 0;
}
