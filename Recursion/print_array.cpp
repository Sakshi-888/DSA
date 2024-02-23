#include<bits/stdc++.h>
using namespace std;

void printReverse(int arr[],int indx,int n)
{
    
    if(indx==n) return;
     printReverse(arr,indx+1,n);
    cout<<arr[indx]<<" ";
   
}

void print(int arr[],int indx,int n)
{
    if(indx==n) return;
    cout<<arr[indx]<<" ";
    print(arr,indx+1,n);
}

int main()
{ int n;
    int arr[]={2,4,6,8,9};
    print(arr,0,5);
    cout<<endl;
    printReverse(arr,0,5);
}