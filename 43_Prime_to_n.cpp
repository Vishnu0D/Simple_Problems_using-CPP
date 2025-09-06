#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<"Prime Numbers up to "<<n<<" is : "<<endl;
    for(int num=0;num<=n;num++){
    bool flag = true;
        for (int i = 2; i * i <= n; i++) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        if(flag)
        cout<<num<<" ";
    }
    return 0;
}
