#include <iostream>
using namespace std;

int sumOfNaturalNum(int n) {
    if (n == 0) {
        return 0;
    }
    return sumOfNaturalNum(n - 1) + n;
}

int sumWithLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int withEquation(int n) {
    return n * (n + 1) / 2;
}

int factorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}

int power(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        return power(m * m, n / 2);
    }
    else {
        return m * power(m * m, n / 2);
    }
    //return power(m, n - 1) * m;
    /*int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * m;
    }
    return res;*/
}

double taylorSeries(int x, int n) {
    static double p = 1;
    static double f = 1;
    double r;
    if (n == 0) {
        return 1;
    }
    else {
        r = taylorSeries(x, n - 1);
        p *= x;
        f *= n;
        return r + p / f;
    }
}

double taylorSeries1(int x, int n) {
    /*double s = 1;
    for (;  n > 0; n--) {
        s = 1 + x * s / n;
    }
    return s;*/
    static double s = 1;
    if (n == 0) {
        return s;
    }
    s = 1 + x*s / n ;
    return taylorSeries1(x, n - 1);
}
int F[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int fibonacci(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    }
    //return fibonacci(n - 2) + fibonacci(n - 1);
    else {
        if (F[n - 2] == -1) {
            F[n - 2] = fibonacci(n - 2);
        }
        if (F[n - 1] == -1) {
            F[n - 1] = fibonacci(n - 1);
        }

        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    /*cout << sumOfNaturalNum(3) << endl;
    cout << sumWithLoop(4) << endl;
    cout << withEquation(5) << endl;
    cout << factorial(-1) << endl;
    cout << power(3, 4) << endl;*/

    //cout << taylorSeries(1, 10) << endl;
    cout << fibonacci(5) << endl;
    return 0;
}
