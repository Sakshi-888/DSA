/*
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.
*/
// Time Complexity = O(n)
// Space Complexity = O(n)

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


// Without using extra space (in-place manipulation)
/*
	Time Complexity : O(N)
	Space Complexity : O(1)

	Where 'N' is size of string of words.
*/

string replaceSpaces(string &str){
	int spaceCount = 0;
	
	// Count Number of Spaces.
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' '){
			spaceCount = spaceCount + 1;
		}
	}

	// Store thr current length of the string in a variable.
	int len = str.size();
	
	// Find the new length.
	int newLength;
	newLength = len + (spaceCount * 2);
	
	// Resize the current string.
	str.resize(newLength);
	
	// Index to end of string.
	int index = newLength - 1;
	
	// Fill string from end.
	for(int k = len - 1 ; k >= 0; k--){
		if(str[k] == ' '){
			str[index] = '0';
            str[index - 1] = '4';
            str[index - 2] = '@';
            index = index - 3;
		}
		else{
			str[index] = str[k];
			index = index - 1;
		}
	}	
	// Return string.
	return str;	
}

int main()
{
    string s;
    getline(cin,s);
    cout<<replaceSpaces(s);
}


