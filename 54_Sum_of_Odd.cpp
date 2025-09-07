#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter limit : ";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        sum+=i;
    }
    cout<<"Sum Of Even Numebrs is : "<<sum;
    return 0;
}
