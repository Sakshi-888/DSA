// To find the lenght of a string
#include<bits/stdc++.h>
using namespace std;
int find_lenght(char name[])
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

    cout<<"Lenght of your name is:"<<find_lenght(name);


}