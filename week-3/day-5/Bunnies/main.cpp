//We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
#include <iostream>
#include <iomanip>
using namespace std;

int Mul(int a,int b);

int main(){
    int a;
    cout<<"Enter the number of bunnies : ";
    cin>>a;

    int b = 2;
    cout<<"\nEars of the bunnies is : "<<Mul(a,b)<<endl;
    return 0;
}

int Mul(int a , int b){
    if (b==0)
        return 0;
    if (a==0)
        return 0;
    else
        return (a + Mul(a,b-1));
}