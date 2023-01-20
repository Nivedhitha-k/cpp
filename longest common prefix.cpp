 /*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

 string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin() ,strs.end());
       string res=strs[0];int pos=strs[0].size();
       for(int i=1;i<strs.size();i++){
           pos=0;
           for(int j=0;j<res.size();j++){
           if(strs[i][j]==res[j])
           pos++;
           else
           break;
           }
       }
       return res.substr(0,pos);
    }
