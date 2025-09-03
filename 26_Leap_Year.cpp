#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the Year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << "Entered Year " << year << " is a Leap Year." << endl;
    else
        cout << "Entered Year " << year << " isn't a Leap Year." << endl;

    return 0;
}
