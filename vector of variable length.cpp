#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*Consider an -element array, , where each index  in the array contains a reference to an array of  
integers (where the value of  varies from array to array). See the Explanation section below for a diagram.
Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes 
an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,k;
    cin>>n>>q;
    vector<vector<int> > a(n);//    vector<int> a[n];
    for(int i=0;i<n;i++){
        cin>>k;
        while(k--){
        int temp=0;
        cin>>temp;
        a[i].push_back(temp);   
        }
    }
   int max;
    for(int k=0;k<q;k++){
     max=0;
     int i=0,j=0;
      cin>>i>>j ;
       cout<<a[i].at(j)<<endl;   
    }
    return 0;
}
