class Solution {
public:
    int reverseDegree(string s) {
        vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 
        unordered_map<char, int> mp;
        for(int i = 25; i >= 0; i--){
            mp[v[i]] = 26-i;
        }
        int n = s.length();
        int degree = 0;
        for(int i = 0; i<n; i++){
            if(mp.find(s[i]) != mp.end()){
                int deg = (i+1) * mp[s[i]]; 
            degree += deg;
            }
        }
        return degree;
        
    }
};