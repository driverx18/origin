#include <iostream>

using namespace std;

/*void swapper(int* array, int size) {

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
*/
int main()
{
    int *arr = new int[10];
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    for(int i = 0; i < 10; i++) {
        if(arr[i] < min && arr[i] > 0) min = arr[i];
    }
    for(int i = 0; i < 10; i++) {
        if(arr[i] < 0) arr[i] = min;
    }
     for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}
