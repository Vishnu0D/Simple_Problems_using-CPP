#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    if(sum==num)
    cout<<"Number is a Perfect Number"<<endl;
    else
    cout<<"Number isn't a Perfect Number"<<endl;
    return 0;
}
