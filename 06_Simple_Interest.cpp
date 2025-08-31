#include <iostream>
using namespace std;
int main()
{  
  float principle,rate,time,simpleinterest;

  cout<<"Enter the Principle,Rate,Time for the Simple Interest :"<<end;
  cin>>principle>>rate>>time;

  simpleinterest=(principle*rate*time)/100;
  
  cout<<"Simple interest = "<<simpleinterest<<endl;
  return 0;
}
