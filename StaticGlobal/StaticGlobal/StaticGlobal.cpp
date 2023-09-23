
#include <iostream>
using namespace std;

int fun(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    //cout << "Hello World!\n";
    int x = 5;
    cout << fun(x);
    return 0;
}
