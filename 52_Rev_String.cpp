#include<iostream>
#include<string>
using namespace std;
int main() {
    string s,rev;
    cout << "Enter the String : ";
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--)
    rev=rev+s[i];
    cout<<rev;
    return 0;
}
