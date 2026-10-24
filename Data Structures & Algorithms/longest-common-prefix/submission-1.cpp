class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=INT_MAX;
        for(int i=0;i<strs.size();i++){
            int n=strs[i].size();
            if(n<min) min=n;
        }
        string s="";
        for(int i=0;i<min;i++){
            char s1=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(s1!=strs[j][i]){
                    return s;
                }
            }
            s.push_back(s1);
        }
        return s;
    }
};