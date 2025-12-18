#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter the cosst price:"<< endl;
    cin>>cp;
    int sp;
    cout<<"Enter the selling price:";
    cin>> sp ;
    if(sp>cp)
    {
        cout<<"Profit";
    }
    else if(cp>sp)
    {
        cout<<"Loss";
    }
    else
    {
        cout<<"no Profit No Loss";
    }
    
}