//  Print all odd number from n to 1 using recursion
#include<bits/stdc++.h>
using namespace std;

void odd_numbers(int n)
{
    if(n<=0)
    {
        return;
    }
    if(n%2!=0){ 
    cout<<n<<endl;
    }
    odd_numbers(n-1);
}

int main()
{
    int n;
    cin>>n;

    odd_numbers(n);
}