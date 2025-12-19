#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the charcter :";
    cin>>ch;
    if (ch>='A ' &&  ch<='z' || ch>='a' && ch<='z')
    {
        cout<<"It is Alphabet";
    }
    else if (ch>='0' && ch<='9')
    {
        cout<< "It is a Digit";
    }
    else
    {
        cout<<"Special Character";
    }
    return 0;
}