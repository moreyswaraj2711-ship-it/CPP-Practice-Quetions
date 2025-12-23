#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    
    cout<<" Enter the No:";
    cin >> n;
    
    int x;
   int rev=0;
   
   temp=n;
    while(n!=0)
    {
        int ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
    
    }
    
    x=temp+rev;
    
    cout<<rev<<endl;
    cout<<"Sum of the number is"<<x;
}