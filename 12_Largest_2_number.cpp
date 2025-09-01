#incldude <iostream.h>
using namespace std;
int main()
{
  int num1,num2;

  cout<<"Enter 2 numbers to compare : "<<endl;
  cin>>num1>>num2;

  if(num1>num2)
    cout<<"1st Number is larger : "<<num1<<endl;
  elseif(num2>num1)
    cout<<"2nd Number is larger : "<<num2<<endl;
  else
  cout<<"Numbers are equal ."<<endl
    return 0;
}
