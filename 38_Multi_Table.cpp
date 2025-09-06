#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<"The Multiplication Table of "<<n<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}
