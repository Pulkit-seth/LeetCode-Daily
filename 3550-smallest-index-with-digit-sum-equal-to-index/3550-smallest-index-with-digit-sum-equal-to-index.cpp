class Solution {
public:
    int sum(int x){
        if(x < 10) return x;
        int ans = 0;
        while(x != 0){
            int dig = x % 10;
            ans += dig;
            x /= 10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(sum(nums[i]) == i) return i;
        }
   return -1; }
};