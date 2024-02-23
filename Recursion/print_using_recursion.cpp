//  Print “anything” 10 times using recursion  
 #include<bits/stdc++.h>
using namespace std;
void printF(int n)
{

    if(n==0)
    {
         
         return ;
    }
    cout<<"sakshi sharma"<<" "<<n<<endl;
    printF(n-1);
}
int main()
{
    int n=10;
    printF(n);
}