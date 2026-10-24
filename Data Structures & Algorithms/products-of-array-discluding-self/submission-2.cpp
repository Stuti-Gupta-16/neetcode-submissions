class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out;
        int zero=0;
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else{
                if(p==0){
                    p=nums[i];
                }
                else{
                    p*=nums[i];
                }
                
            }
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1) {
                out.push_back(0);
                continue;
            }
            if(nums[i]==0){
                out.push_back(p);
            }
            else if(zero==1){
                out.push_back(0);
            }
            else{
                p=p/nums[i];
                out.push_back(p);
                p*=nums[i];
            }
        }
        return out;
    }
};
