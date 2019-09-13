#include <iostream>
using namespace std;

// - Create an array variable named `aj`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Reverse the order of the elements in `aj`
// - Print the elements of the reversed `aj`

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;


    reverseArray(arr,start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main(int argc, char* args[]){
    int aj[] = {3, 4, 5, 6, 7};

    reverseArray(aj, 0, 4);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(aj, 5);

    return 0;
}