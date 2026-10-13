class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       
        if(n == 0 || n == 1) return cost[n];
        for(int i = 2; i< n; i++){
            cost[i] += min(cost[i-1], cost[i-2]);
        }

       return min(cost[n-2], cost[n-1]);}
};