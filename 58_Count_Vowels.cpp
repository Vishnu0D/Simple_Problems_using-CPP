#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string a;
    int count=0;
    char lwr;
    cout<<"Enter a string : ";
    getline(cin,a);
     
    for(char c:a){
    lwr=tolower(c);        
    if(lwr=='a'||lwr=='e'||lwr=='i'||lwr=='o'||lwr=='u')
    {
        ++count;
    }
    }
    cout<<"Number of Vowels : "<<count;
    return 0;
}
