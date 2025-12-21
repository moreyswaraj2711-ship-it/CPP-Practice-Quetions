#include <iostream>
using namespace std;

int main() {
    float salary, bonus;

    cout << "Enter salary: ";
    cin >> salary;

    if (salary > 50000) {
        bonus = salary * 0.10;
    } else {
        bonus = salary * 0.05;
    }

    cout << "Bonus = " << bonus << endl;
    cout << "Total Salary = " << salary + bonus;

    return 0;
}
