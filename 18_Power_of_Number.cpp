#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int base,exponent;
    double power;

    cout<<"Enter the Value for Base : ";
    cin>>base;
    cout<<"Enter the Value for  Exponent : ";
    cin>>exponent;
    
    power=pow(base,exponent);
    
    cout<<"THE POWER OF THE NUMBER "<<base<<" is : "<<power<<endl;
    return 0;
}
