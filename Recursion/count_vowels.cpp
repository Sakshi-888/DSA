#include<bits/stdc++.h>
using namespace std;

int count(string str,int indx)
{
    if(indx==-1) return 0;

    if(str[indx]=='a'||str[indx]=='e' || str[indx]=='i' || str[indx]=='o' || str[indx]=='u')
    {
        return 1+count(str,indx-1);
    }
    else return count(str,indx-1);
}

int main()
{
    string str="sakshi";
    cout<<count(str,5);
}