#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if ((n % 3 == 0 || n % 7 == 0) && !(n % 3 == 0 && n % 7 == 0)) {
        cout << "Divisible by 3 or 7 but not both";
    } else {
        cout << "Condition not satisfied";
    }

    return 0;
}
