// FibonacciSeries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int F[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };

int fibonacci(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    }

    if (F[n - 2] == -1) {
        F[n - 2] = fibonacci(n - 2);
    }
    if (F[n - 1] == -1) {
        F[n - 1] = fibonacci(n - 1);
    }

    return F[n - 2] + F[n - 1];
}

int main()
{
    cout << fibonacci(6) << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
