#include <bits\stdc++.h>
using namespace std;
char Max_occ_character(string &s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int count = 0;
        count = ch - 'a';
        arr[count]++;
    }
    int ans = 0;
    int maxi = -1;

    for (int i = 0; i < 26; i++)
    {

        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main()
{
    string s;
    cin >> s;
    cout << Max_occ_character(s);
}
