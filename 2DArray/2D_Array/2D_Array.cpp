#include <iostream>
using namespace std;
int main()
{
    int A[3][4] = { {1,2,3,4} , {5,6,7,8},{9,10,11,12} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int* p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];
    int num = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            p[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    int** B;
    B = new int* [3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    num = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}