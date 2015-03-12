#include <iostream>

using namespace std;

int arr(int *arr, int size) {
    int max, min;
    max = min = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << "max element is " << max << " and min element is " << min << endl;
   return max+min;
}

int main()
{
    int arraymy[5] = {22,9,7,66,15};
    int myname[10];
    for(int i = 0; i < 10; i++) {
        cin >> myname[i];
    }
    int sumer = arr(arraymy,5);
    int sum2 = arr(myname,10);
    cout << "Them sum is " << sumer << endl;
    cout << "The second sum is " << sum2 << endl;
    return 0;
}
