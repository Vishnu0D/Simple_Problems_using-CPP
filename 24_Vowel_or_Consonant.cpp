#include <iostream>
using namespace std;
int main(){
  char c;
  cout<<"Enter a character : "<<endl;
  cin>>c;
  int flag=0;
  char vowel[]={'A','E','I','O','U','a','e','i','o','u'};
  
  for(int i=0;i<10;i++)
    if(c==vowel[i])
        flag=1;
    if(flag==1)
    cout<<"Entered Character is a Vowel"<<endl;
    else
    cout<<"Entered Character is a Consonant"<<endl;
    
  return 0;
}
