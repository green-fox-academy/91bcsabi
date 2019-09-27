#include <iostream>

//We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the normal 2 ears.
// The even bunnies (2, 4, ..) we'll say have 3 ears, because they each have a raised foot.
// Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

using namespace std;

int Mul(int a,int b);

int main(){
    int a;
    cout<<"Enter the number of bunnies : ";
    cin>>a;

    int b = 2;
    cout<<"\nEars of the bunnies is : "<<Mul(a,b)+Mul(a,b)/4 <<endl;
    return 0;
}

int Mul(int a , int b){
    if (a==0)
        return 0;
    if (b==0)
        return 0;
    else
        return (a + Mul(a,b-1));
}