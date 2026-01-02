#include<iostream>
using namespace std;
int swap(int& x,int& y )
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x,y;
    cout<<" Enter the no :";
    cin>>x;
    cout<<" Enter the no :";
    cin>>y;
   
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

}
