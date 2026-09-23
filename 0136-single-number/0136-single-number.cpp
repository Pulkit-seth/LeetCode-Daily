class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int ans=0;
    //     for(int val:nums){
    //         ans=ans^nums;
    //     }
    //     return ans;
    // }
     int res = 0;

        for (int n : nums) {
            res ^= n;
        }

        return res;        
    } };