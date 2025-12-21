#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the N:";
    cin>>n;

   
    for(int i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            cout<<" Composite NO ";
            break;
        }
    }
}