class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==0) return 0;
        if(n==1) return cost[0];
        int curr, pre=cost[0], pre2=0;
        for(int i=1;i<n;i++){
            curr=min(pre+cost[i], pre2+cost[i]);
            pre2=pre;
            pre=curr;
        }
        return min(pre2, pre);
    }
};
