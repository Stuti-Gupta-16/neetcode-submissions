class Solution {
public:
    int rob(vector<int>& nums) {
        int val=nums[0], prev=val,pre2=0;
        for(int i=1;i<nums.size();i++){
            val=max(val,pre2+nums[i]);
            pre2=prev;
            prev=val;
        }
        return val;
    }
};