class Solution {
public:
    void getperm(vector<int>& nums, int idx, int n, vector<vector<int>> &ans) {
        // int n = nums.size();
        // vector<vector<int>> ans;
        if (idx == n) {
            ans.push_back(nums);
            return;
        }
        for (int j = idx; j < n; j++) {
            swap(nums[idx], nums[j]);
            getperm(nums, idx + 1, n, ans);
            swap(nums[idx], nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        getperm(nums, 0, n, ans);
        return ans;
    }
};