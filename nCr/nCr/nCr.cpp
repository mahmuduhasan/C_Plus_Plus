#include <iostream>
using namespace std;

int nCr(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    }

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

void towerOfHanoi(int n, char start, char destination, char handler) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, start, handler, destination);
    cout << start << " " << destination << endl;
    towerOfHanoi(n - 1, handler, destination, start);
}

int main()
{
    /*cout << nCr(4, 2) << endl;*/
    towerOfHanoi(3, 'A', 'C', 'B');

    

    return 0;
}