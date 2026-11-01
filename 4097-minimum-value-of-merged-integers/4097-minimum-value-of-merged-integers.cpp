class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        vector<string> v;
        for(int i  =0 ;  i <n; i+=2){
            v.push_back(to_string(nums[i]) + to_string(nums[i + 1]) );
        }
        if(v.size() ==  1) return stoi(v[0]);
        int least = stoi(v[0]);
        for(int i = 0; i<v.size(); i++){
            if(stoi(v[i]) < least) least = stoi(v[i]);
        }
   return least; }
};