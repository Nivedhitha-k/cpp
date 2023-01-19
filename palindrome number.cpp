/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.
for signed int also*/

class Solution {
public:
    bool isPalindrome(int x) {
    long int copy=x;
    long int rev=0;
     if(x<0){
          return false;
     }
     while(x!=0 ){
         rev=(rev*10)+x%10;
         x=x/10;
     }
     if(rev==copy)
     return true;
     return false;
     }
};
