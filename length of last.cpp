/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal 
substring
 consisting of non-space characters only.*/
#include <iostream>
//#include<stdlib.h>
using namespace std;

int main()
{
string s="hi hello welcome   ";
  int i=s.length()-1;int count=0;
        while(s[i]==' '){
            i--;
        }
        while(i>=0&&s[i]!=' '){
                 i--;
                 count++;
                 
        }
       // return count;
        cout<<count<<endl;
}
