#include <iostream>

using namespace std;

int add(int n){
    if(n == 0){
        return 0;
    }
    int sum = n + add(n-1);
    return sum;
}

void towerOfHanoi(int n, char start, char destination, char handler){
    if(n == 0){
        return;
    }
    towerOfHanoi(n-1,  start,  handler,  destination);
    cout << start << " " << destination << endl;
    towerOfHanoi(n-1,  handler,  destination,  start);
}

int main()
{
    cout << add(10) << endl;

    towerOfHanoi(3,'A', 'C', 'B');
    return 0;
}
