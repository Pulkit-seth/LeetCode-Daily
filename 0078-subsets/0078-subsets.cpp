class Solution {
public:
    void sub(vector<int> &nums, int i, int n, vector<vector<int>> &ans, vector<int> &current){
    
    if(i == n) {
        ans.push_back(current);
        return;

    }
    current.push_back(nums[i]);
    sub(nums, i+1, n, ans, current);
    current.pop_back();
    sub(nums, i + 1, n, ans, current);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
     int n = nums.size();
     vector<int> current;
     vector<vector<int>> ans;
     sub(nums, 0, n, ans, current);
     return ans;
      }
};