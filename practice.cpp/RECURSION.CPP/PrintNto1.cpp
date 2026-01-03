#include<iostream>
using namespace std;
int print(int n){
    if(n==0) return;
    print(n-1);
}
int main()
{
    int n;
    print(n);
}