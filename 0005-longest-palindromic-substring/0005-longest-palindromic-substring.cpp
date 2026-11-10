class Solution {
public:
    // bool palindrome(string s){
    //     string s2 = s;
    //     reverse(s2.begin(), s2.end());
    //     if(s == s2) return true;
    //     return false;
    // }
    string longestPalindrome(string s) {
        
        int n = s.length();
        if(n== 0 || n == 1) return s;
        string ans = "";
        for(int i =0; i<n; i++){
            //ODD
            int l = i, r = i;
            while(l >= 0 && r<n && s[l] == s[r]){

             if(r-l+1 > ans.length())   ans = s.substr(l, r-l+1);
             l--;
             r++;
            }
               //EVEN
              l = i, r = i+1;
            while(l >= 0 && r <n && s[l] == s[r]){

             if(r-l+1 > ans.length())   ans = s.substr(l, r-l+1);
              l--;
             r++;
            }
        }
  return ans;  }
};