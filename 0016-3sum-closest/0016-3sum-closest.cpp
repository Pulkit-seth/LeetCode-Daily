class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         int ans = INT_MAX;
//         int diff = 0;
//         int mindif = INT_MAX;
//         int n = nums.size();
//         for(int i =0; i<n; i++) {
//             int l =i+1;
//           int  r = n-1;
//             while(l < r) {
//                  diff = abs(target-(nums[i] + nums[l] + nums[r]));
//                  mindif = min(mindif, diff);
               
//                  ans = min(ans, diff);
//                  l++;
//                  r--;
//             }
//         }
//    return ans +mindif ; }


   sort(nums.begin(), nums.end());
   int closestsum = INT_MAX;
   int mindif =  INT_MAX;
   for(int i =0; i<nums.size(); i++) {
    int sum =0;
    int l = i+1;
    int r = nums.size() -1;

    while(l < r) {
        int sum = nums[i] + nums[l] + nums[r];

        int diff = abs(target - sum);
        if(diff < mindif) {
            mindif = diff;
            closestsum = sum;
        }


        if(sum < target) {
            l++;
        }
        else {
            r--;
        }
    } 
   }
   return closestsum; }
};