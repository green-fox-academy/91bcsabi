#include <iostream>
#include <algorithm>

using namespace std;

// Create a function which takes an array (and its length) as a parameter
// and returns a pointer to its minimum value


int FindMin(int numbers[],int n){
    int i, min;
    min = numbers[0];
    for(i=1;i<n;i++)
    {
        if(numbers[i]<min)
            min =numbers[i];
    }
    return min;
}
int main(){

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    cout << *numbers << endl;

    return 0;
}
