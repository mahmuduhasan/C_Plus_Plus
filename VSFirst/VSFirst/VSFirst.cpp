#include <iostream>
using namespace std;

int main()
{
    /*nt a, b, c;

    a = 10;
    b = 20;
    c = 30;

    cout << "Hello World!\n";
    cout << a << " " << b << " " << c << endl;*/
    int sum = 0;
    int A[] = { 1,2,3,4,5,6,7 };

    for (auto x : A) {
        sum += x;
    }
    cout << sum << endl;
    return 0;
}