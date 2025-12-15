#include <iostream>
// #include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
// int max_of_four(int a,int b,int c,int d){
    // cout<<a << b << c <<d;
    
    int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if(b > max) max=b;
    if(c > max) max=c ;
    if(d > max) max=d;
    return max;
}




int main() {
    int a, b, c, d;
     scanf("%d ", &a);
     scanf("%d", &b);
     scanf("%d",  &c);
     scanf("%d ", &d);
    // cin >> a >> b >> c >> d;

    int ans;
    ans= max_of_four(a, b, c, d);
    printf("%d", ans);
    // cout << ans;
    
    return 0;
}