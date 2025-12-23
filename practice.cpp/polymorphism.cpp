#include<iostream>
using namespace std;

int add (int a, int b){
    return a+b;
}

float add(int a ,int b,int c){
    return a+b+c;
}


int main() {
    int a = 5, b =4, c = 6;

    
    cout << add(a, b) << endl;

    cout << add(a, b, c);

    return 0;
}