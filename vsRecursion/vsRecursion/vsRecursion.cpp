#include <iostream>
#include<stdio.h>
using namespace std;

void fun(int n) {
    if (n > 0) {
        fun(n - 1);
        printf("%d ", n);
    }
}
int x = 0;
int addStatic(int n) {
    
    if (n > 0) {
        x++;
        return addStatic(n - 1) + x;
    }
    return 0;
}

void main()
{
    //cout << "Hello World!\n";
    //int x = 3;
    //fun(x);
    cout << addStatic(5);
}
