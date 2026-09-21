class Solution {
public:
    int steps(int idx, vector<int>& dp){
        if(idx == 0 || idx == 1) return 1;
        if(dp[idx] != -1) return dp[idx];
        int l = steps(idx-1,  dp);
        int r = steps(idx-2, dp);
        return dp[idx] = l+r;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        int ans = steps(n, dp);
        return ans;
    }
};