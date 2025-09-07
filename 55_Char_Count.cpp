#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char ch;
    int count = 0;
    cout << "Enter a string : ";
    getline(cin, s);
    cout << "Enter a character to find its occurrences : ";
    cin >> ch;
    for(int i=0;i<s.length();i++)
    {
        if(ch==s[i])
        ++count;
    }
    cout<<"The Character '"<<ch<<"' Repeat "<<count<<" Times.";
    return 0;
}
