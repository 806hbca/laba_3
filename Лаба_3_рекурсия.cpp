

#include <iostream>
#include <cmath>
using namespace std;

long long fact(int n)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

double suma(int n, double x)
{
    if (n >= 0) return pow(-1, n) * ((2 * pow(n, 2) + 1) / fact(2 * n)) * pow(x, 2 * n) + suma(n - 1, x);
    else return 0;
}

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "Введите n и х:";
    int n,double x;
    cin >> n >> x;
    cout << suma(n,x);
}

