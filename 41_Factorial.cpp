#include <iostream>
using namespace std;
int main() {
    int n,fact=1;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of the Number is : "<<fact<<endl;
    return 0;
}
