class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int e=nums[0] , l=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==e) l++;
            else l--;
            if(l==0){
                e=nums[i];
                l=1;
            }
        }
        return e;
    }
};