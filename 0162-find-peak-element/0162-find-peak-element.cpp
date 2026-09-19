class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 2) {
            if(nums[0] > nums[1]) return 0;
            else return 1;
        }
        if(nums[0] == *max_element(nums.begin(), nums.end())) return 0;
        if(n == 1) return 0;
        // if(n == 3) {
        //     if(nums[0] > nums[1] && nums[0] > nums[2]) return 0;
        //     if(nums[1] > nums[0] && nums[1] > nums[2]) return 1;
        //     if(nums[2] > nums[0] && nums[2] > nums[1]) return 2;
        // }
        // int ans = 0;
        for(int i = 1; i<n-1; i++){
            if(i  ==   n-1){
                return i;
                // if(nums[i]> nums[i-1]) return i;
                // else return i-1;
            }
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) return i;
            
          
        }
   return n-1; }
};