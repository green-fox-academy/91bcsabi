#include <iostream>
using namespace std;

// - Create an array variable named `ai`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Print the sum of the elements in `ai`

int sum(int arr[], int n){
        int sum = 0;

        for (int i = 0; i < n; i++)
            sum += arr[i];

        return sum;
}

int main(int argc, char* args[]){

    int ai[] = {3, 4, 5, 6, 7};
    int n = sizeof(ai) / sizeof(ai[0]);
    cout << "Sum of given array is : "<< sum(ai, n) << endl;
    return 0;
}