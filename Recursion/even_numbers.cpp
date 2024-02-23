#include <bits/stdc++.h>
using namespace std;

void printEven(int n)
{
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }

    printEven(n - 2);
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;

    printEven(n);
}