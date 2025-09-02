#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int base,exponent;
    double power=1;

    cout<<"Enter the Value for Base : ";
    cin>>base;
    cout<<"Enter the Value for  Exponent : ";
    cin>>exponent;
    
    for(int i=1;i<=exponent;i++)
    power*=base;
    
    cout<<"THE POWER OF THE NUMBER "<<base<<" is : "<<power<<endl;
    return 0;
}
