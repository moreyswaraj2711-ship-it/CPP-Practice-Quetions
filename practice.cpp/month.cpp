#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number: ";
    cin >> month;

    if (month >= 1 && month <= 12) {
        cout << "Valid Month Number";
    } else {
        cout << "Invalid Month Number";
    }

    return 0;
}
