class Solution {
public:
    int findMin(vector<int>& nums) {
    //    int mini = INT_MAX;
      int n = nums.size();
      int l = 0, r= n-1;
      while (l < r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
            l = mid + 1;   // min is in right half
        else
            r = mid;       // min is at mid or left of mid
    }
    return nums[l];
}
};