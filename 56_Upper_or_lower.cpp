#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    string upper=s;
    string lower=s;
    cout<<"1. Converting  Strings to Upper-Case : "<<endl;
    transform(upper.begin(),upper.end(),upper.begin(),::toupper);
    cout<<upper<<endl;
    
    cout<<"2. Converting  Strings to Upper-Case : "<<endl;
    transform(lower.begin(),lower.end(),lower.begin(),::tolower);
    cout<<lower<<endl;
    
    return 0;
}
