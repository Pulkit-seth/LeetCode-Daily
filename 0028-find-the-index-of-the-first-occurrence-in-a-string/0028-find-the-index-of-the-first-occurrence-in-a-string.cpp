class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
//         int l = 0, i =0, j = n-1;
//         int ans = INT_MAX;
//         int r = n - 1;
//         while(l < r && i<j){
//             if(haystack[i] == needle[l] && haystack[r] == needle[r]) {
//                 ans = min(ans , i);
//                 i++;
//                 j--;
//                 l++;
//                 r--;
//                 if(i == j || l ==r) return ans;
//             }
//             // else{}
//         }
//   return -1;  }
if(n ==0 ) return 0;
   for(int i =0; i<= m-n; i++) {
    if(haystack.substr(i,n) == needle) return i;
   }
   
   return -1; }
};