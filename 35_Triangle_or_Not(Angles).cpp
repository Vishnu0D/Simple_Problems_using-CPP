#include <iostream>
using namespace std;

int main() {
    float a,b,c,sum;

    cout << "Enter the three Angles : ";
    cin >> a>>b>>c;
    sum=a+b+c;
    
    if(sum==180)
    cout<<"It is a Traingle" <<endl;
    else
    cout<<"It isn't a Triangle "<<endl;
    return 0;
}
