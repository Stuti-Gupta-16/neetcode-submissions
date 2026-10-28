class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> ans(temperatures.size());
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!s.empty() && s.top().first<=temperatures[i]) s.pop();
            if(s.empty()) ans[i]=0;
            else ans[i]=s.top().second-i;
            s.push({temperatures[i],i});
        }
        return ans;
    }
};
