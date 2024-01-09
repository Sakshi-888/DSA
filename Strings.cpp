// To find the lenght of a string
#include<bits/stdc++.h>
using namespace std;
void reverse_string(char name[],int n)
{
    int s=0;
    int e= n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int find_length(char name[])
{
    int count=0;
     for(int i=0;name[i]!='\0';i++)
     {
          count++;
     }
     return count;
}
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    int len=find_length(name);
    cout<<"Lenght of your name is:"<<len<<endl;

    reverse_string(name,len);
    cout<<name;


}