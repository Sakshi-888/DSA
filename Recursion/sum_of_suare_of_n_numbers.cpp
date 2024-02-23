#include<bits/stdc++.h>
using namespace std;

int squareSum(int n)
{
    if(n==1) return 1;
    return n*n+squareSum(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<squareSum(n)<<endl;
}