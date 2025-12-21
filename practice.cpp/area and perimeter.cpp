#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "Area is greater than Perimeter";
    } else {
        cout << "Perimeter is greater than Area";
    }

    return 0;
}
