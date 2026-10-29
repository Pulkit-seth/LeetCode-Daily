class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     for(int i =0; i<nums2.size(); i++) {
    //         nums1.push_back(nums2[i]);
    //     }
    //     sort(nums1.begin(), nums1.end());
    //    int i =0;
    //    while(nums1[i] == 0) {
    //     nums1.pop_back();
    //     if(nums1[i] != 0) break;
    //    }

   
     int i =0, j=0;
     vector<int> word3;
     while(i<m && j<n) { 
    
        if(nums1[i] < nums2[j] ) {
            word3.push_back(nums1[i]);
            i++;
        }
        else  {
            word3.push_back(nums2[j]);
            j++;
        }
     }
     while(i<m) {
        word3.push_back(nums1[i]);
        i++;
     }
     while(j<n) {
        word3.push_back(nums2[j]);
        j++;
     }
      for (int k = 0; k < m + n; k++) {
            nums1[k] = word3[k];
        }
    

    }
};