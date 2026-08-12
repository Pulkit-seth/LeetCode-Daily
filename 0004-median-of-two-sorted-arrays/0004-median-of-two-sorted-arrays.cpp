class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int m = nums1.size();
        int n = nums2.size();
        int l = 0, r = 0;
        vector<int>merged;
        while( l < m && r < n){
            if(nums1[l] <= nums2[r]) {
                merged.push_back(nums1[l]);
                l++;}
                else{
                    merged.push_back(nums2[r]);
                    r++;
                }
        }
        while(l < m){
            merged.push_back(nums1[l++]); 
        }
        while(r < n){
            merged.push_back(nums2[r++]); 
        }


        int idx = (m+n);
        if(idx % 2 == 1) return merged[idx/2];
        else 
          return (merged[idx/2 - 1] + merged[idx/2]) / 2.0;
          }
};