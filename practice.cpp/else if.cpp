#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter the Marks:";
    cin>>x;
    if(x>=81 && x<=100)
    {
        cout<<"Very Good";
    }
    else if(x>=61 && x<=80)
    {
        cout<<"GOod";
    }
    else if(x>=41 && x<=60)
    {
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}