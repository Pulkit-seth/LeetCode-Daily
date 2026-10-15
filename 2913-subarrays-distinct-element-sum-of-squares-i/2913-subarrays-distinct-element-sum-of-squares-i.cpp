class Solution {
public:
    int distinct(vector<int> v){
        set<int> st(v.begin(), v.end());
        return st.size();

    }
    int sumCounts(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        vector<int> cnts;
        for(int i = 0; i<n; i++){
            cnt = 0;
            for(int j = i; j<n; j++){
                vector<int> v( nums.begin() + i, nums.begin() +j+1);
                cnt = distinct(v);
                cnts.push_back(cnt);
            }
        }
        int sum = 0;

        for(int x : cnts){
            sum += x * x;
        }
   return sum; }
};