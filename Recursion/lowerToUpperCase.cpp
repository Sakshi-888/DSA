#include<bits/stdc++.h>
using namespace std;

void lowerToUpper(string &str,int idx)
{
    if(idx==-1) return;

    str[idx]='A'+str[idx]-'a';
    lowerToUpper(str,idx-1);
}


int main()
{
    string str="aditya";
    lowerToUpper(str,5);
    cout<<str;
}