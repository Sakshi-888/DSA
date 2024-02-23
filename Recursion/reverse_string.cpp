#include<bits/stdc++.h>
using namespace std;

void rev(string &str,int start,int end)
{
    if(start>=end)
    {
        return;
    }

    char c=str[start];
    str[start]=str[end];
    str[end]=c;
    return rev(str,start+1,end-1);
}

int main()
{
    string str="aditya";
    rev(str,0,5);
    cout<<str;
}