#include <iostream>
using namespace std;
int main()
{
  int num1,num2,temp;
  cout<<"Enter 2 numbers to be swapped"<<endl;
  cin>>num1>>num2;

  temp=num1;
  num1=num2;
  num2=temp;
  cout<<"After Swapping a= "<<num1<<" b= "<<num2<<endl;
  return 0;
}
