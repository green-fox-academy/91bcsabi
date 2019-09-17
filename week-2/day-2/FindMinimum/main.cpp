#include <iostream>
#include <algorithm>

using namespace std;

// Create a function which takes an array (and its length) as a parameter
// and returns a pointer to its minimum value


int FindMin(int numbers[],int n){ //function to find smallest element

    int i, min;
    min = numbers[0];// assuming first element as minimum
    for(i=1;i<n;i++)
    {
        if(numbers[i]<min)// If current element is smaller than min
            min =numbers[i];//assigning the smaller number to min
    }
    return min; //returns the smallest number to main function
}
int main(){

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    cout << *numbers << endl;

    return 0;
}
