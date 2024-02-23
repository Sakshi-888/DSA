// Print all numbers from 1 to n using recursion. 



#include<bits/stdc++.h>
using namespace std;


void printF(int n)
{
if(n<=0)
{
    return ;
}
printF(n-1);
cout<<n<<endl;

}

int main()
{
    int n;
    cin>>n;

    printF(n);
}