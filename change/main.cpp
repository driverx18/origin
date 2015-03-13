#include <iostream>

using namespace std;

void swapper(int* array, int size) {

    int min = array[0];
    for(int i = 0; i < size; i++) {
       if(array[i] < min && array[i] > 0) min = array[i];
    }
    for(int i = 0; i < size; i++) {
        if(array[i] < 0) array[i] = min;
    }
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

}

int main()
{
    int arr[10] = {3,-4,5,12,-6,2,0,40,-9,23};
    swapper(arr,10);
    return 0;
}
