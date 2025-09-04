#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.00);
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
    }
    else {
        bill = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + ((units - 300) * 5.00);
    }

    cout << "Total electricity bill: ₹" << bill << endl;

    return 0;
}
