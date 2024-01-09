/*
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
*/
#include<bits\stdc++.h>
using namespace std;

string replaceSpaces(string &str){
	
	string temp="";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			temp.push_back('@');
		    temp.push_back('4');
            temp.push_back('0');

	    }
		else{
			temp.push_back(str[i]);
		}

	}
	return temp;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<replaceSpaces(s);
}

