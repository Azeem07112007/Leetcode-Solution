class Solution {
public:
    int rec(int i,vector<int>&nums,int n,vector<int>&dp){
        if(i>=n)    
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int take = nums[i]+rec(i+2,nums,n,dp);
        int nottake=rec(i+1,nums,n,dp);
        int ans= max(take ,nottake);
        dp[i]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);

        int app1=nums[0]+rec(2,nums,n-1,dp1);
        int app2=rec(1,nums,n,dp2);
        return max(app1,app2);

    }
};