class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int val1=nums[0], pre=val1, pre2=0;
        for(int i=1;i<nums.size()-1;i++){
            val1=max(nums[i]+pre2, pre);
            pre2=pre;
            pre=val1;
        }
        int val2=nums[1];
        pre=val2, pre2=0;
        for(int i=2;i<nums.size();i++){
            val2=max(nums[i]+pre2,pre);
            pre2=pre;
            pre=val2;
        }
        return max(val1, val2);

    }
};