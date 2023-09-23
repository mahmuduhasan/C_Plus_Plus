// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int A[] = { 1,2,3,4,5,6 };
    int B[5];
    int C[10] = { 10,11,12 };
    int D[5] = { 0 };
    int E[5];

    for (int i = 0; i < 5; i++) {
        cout << &A[i] << endl;
    }

    int* p = new int[5];
    int* q = new int[10];
    //int* p = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    delete []p;

    p = q;
    //delete[]q;
    q = NULL;
    for (int i = 0; i < 10; i++) {
        cout << p[i] << " ";
    }
    /*cout << A[2] << endl;
    cout << 2[A] << endl;
    cout << *(A+2) << endl;*/
    
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
