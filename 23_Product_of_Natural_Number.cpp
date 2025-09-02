#include <iostream>
using namespace std;

int main() {
    int num;
    long long product = 1; 
    cout << "Enter the Integer : ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        product *= i;
    }
    cout << "Product of first " << num << " natural numbers = " << product << endl;

    return 0;
}
