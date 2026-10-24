class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        else if(n==2) return 2;
        int f=1,s=2;
        int ans=0;
        for(int i=3;i<=n;i++){
            ans=f+s;
            f=s;
            s=ans;
        }
        return ans;
    }
};
