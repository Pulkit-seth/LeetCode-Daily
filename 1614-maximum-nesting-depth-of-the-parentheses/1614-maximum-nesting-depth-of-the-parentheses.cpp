class Solution {
public:
    int maxDepth(string s) {
      int n = s.length();
      int cnt = 0, maxcnt = INT_MIN;
      for(int i = 0; i<n; i++){
        if(s[i] == '(') cnt++;
        else if(s[i] == ')') cnt--;
        maxcnt = max(cnt,maxcnt);
      } 
      return maxcnt; 
    }
};