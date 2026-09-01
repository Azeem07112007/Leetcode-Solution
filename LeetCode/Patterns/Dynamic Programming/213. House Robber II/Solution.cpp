class Solution {
public:
    int rec(int i,vector<int>&nums,int n,vector<int>&dp){
        if(i>=n)    
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int take = nums[i]+rec(i+2,nums,n-1,dp);
        int notake=rec(i+1,nums,n,dp);
        int ans= max(take ,notake);
        dp[i]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);

        return rec(0,nums,n,dp);
    }
};