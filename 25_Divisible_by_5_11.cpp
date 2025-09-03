#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER THE NUMBER : " << endl;
    cin>>num;
    if(num%5==0 && num%11 ==0)
    cout<<"Entered Number "<<num <<" is Divisible by both : "<<endl;
    else if (num % 5 == 0) 
        cout << num << " is divisible by 5 but not 11." << endl;
    else if (num % 11 == 0) 
        cout << num << " is divisible by 11 but not 5." << endl;
    else
    cout<<"Entered Number "<<num<<" isn't Divisible by both : "<<endl;
  return 0;
}
