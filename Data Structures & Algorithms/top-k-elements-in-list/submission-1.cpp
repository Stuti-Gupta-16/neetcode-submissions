class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> p;
        for(auto m:mp){
            p.push({m.second,m.first});
        }
        vector<int> ans;
        while(k>0){
            ans.push_back(p.top().second);
            p.pop();
            k--;
        }
        return ans;
    }
};
