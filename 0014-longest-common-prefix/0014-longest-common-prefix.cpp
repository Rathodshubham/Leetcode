class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
            string ans="";
       sort(strs.begin(),strs.end());
       int i=0;
        int j=0;
        string s1=strs[0];
        string s2=strs[n-1];
        while(i<s1.length() && j<s2.length()){
            if(s1[i]==s2[j]){
                ans+=s1[i];
            }
            else {
                break;
            }
             i++;
             j++;
        }
        return ans;
    }
};