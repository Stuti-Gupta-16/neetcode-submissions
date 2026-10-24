class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            if(m.find(b)!= m.end()){
                ans.push_back(min(i,m[b]));
                ans.push_back(max(i,m[b]));
            }
            m[a]=i;
        }
        return ans;
    }
};
