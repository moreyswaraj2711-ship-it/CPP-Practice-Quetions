#include <iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter The Numbers";
    cin >> n;
    int sum=0;
    while(n>0)
    {
        int ld=n%10;
        if(ld%2==0)
        {
            sum=sum+ld;
        }
        n=n/10;
    }
    cout<< "Sum of digit :" << sum;
    
}
