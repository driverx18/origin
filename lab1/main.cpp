#include <iostream>

using namespace std;

void swap(int *a, int *b);
void sorting();

const int N = 7;
int arr[N];
int *parr = arr;
int main()
{
    system("color 27");

    for(int i = 0; i < N; i++) {
        cout << "Enter " << i+1 << " element: ";
        cin >> *(parr+i);
    }
    system("cls");
    for(int i = 0; i < N; i++)  cout << "Your array: " << parr[i] << endl;
    cout << endl;
    sorting();


    for(int i = 0; i < N; i++) {
        cout << "Sorted array: " << parr[i] << endl;
    }
    for(int i = 0; i < 3; i++) {
        cout << endl;
    }
    cout << "THREE MAX NUMBERS: " << "#1: " << parr[N-1] << ", #2: " << parr[N-2] << ", #3: " << parr[N-3] << endl << endl;
    cout << "TWO MIN NUMBERS: " << "#1: " << parr[0] << ", #2: " << parr[1] << endl;
    for(int i = 0; i < 2; i++) {
        cout << endl;
    }
    cout << "\t\t\t\t~Igor Volokitin" << endl;
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sorting() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N-1; j++) {
            if(parr[j] > parr[j+1]) swap(&parr[j], &parr[j+1]);
        }
    }
}

/* Natural num N (N>5) and array A1, A2, An symbol elements. Find three max elements and two min elements of this array */
