#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the Number:";
    cin>> x;
    if( x%5==0 && x%3==0)
    {
        cout<<"Divisible ";
    }
    else 
    {
        cout<<"Not divisible ";
    }
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter the number: ";
//     cin >> x;

//     if (x % 3 == 0 && x % 5 == 0)
//         cout << "Number is divisible by both 3 and 5";
//     else
//         cout << "Number is not divisible by both 3 and 5";

//     return 0;
// }
