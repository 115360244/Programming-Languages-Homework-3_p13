#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
using namespace std;

double Power(double x, int n);

int main()
{
    int k;
    double Ans;

    cout << "計算 3.5 的 k 次方？請輸入 k = ";
    cin >> k;

    Ans = Power(3.5, k);

    cout << "3.5 的 " << k << " 次方 = " << Ans << endl;

    system("pause");
    return 0;
}

double Power(double x, int n)
{
    int i;
    double PowerXn = 1;

    for (i = 1; i <= n; i++)
    {
        PowerXn = PowerXn * x;
    }

    return PowerXn;
}