#include <iostream>
using namespace std;
int main()
{
  int number;
  cout<<"Enter the number you want to check "<<endl;
  if(number>0){
    cout<<"The number is Positive"<<endl;}
  elsif(number<0){
    cout<<"The number is Negative"<<endl;}
    elsif(number==0){
    cout<<"The number is Zero"<<endl;}
  else
    cout<<"Invalid Input"<<endl;
  return 0;
}
