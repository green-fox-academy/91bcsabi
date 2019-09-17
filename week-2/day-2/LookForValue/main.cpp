
#include <iostream>
using namespace std;


// Create a function which takes an array (and it's lenght) and a number as a parameter
// the function should return index where it found the given value
// if it can't find the number return -1


int findIndex(int *arr, int size, int value){
    for (int i = 0; i < size; ++i) {
        if ( *(arr + i) == value) {
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    int num = 1;

    cout << "Number " << num << " is at index " << findIndex(arr, len, num);

    return 0;
}
