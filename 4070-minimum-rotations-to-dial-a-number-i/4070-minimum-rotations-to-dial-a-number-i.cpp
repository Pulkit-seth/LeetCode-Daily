class Solution {
public:
    int minRotations(string s) {
        int total = 0, curr = 0;
        int n = s.length();
        for(int i = 0; i<10; i++){
        int diff = abs(curr - (s[i] - '0'));
            total += min(diff, 10 - diff);
            curr = (s[i] - '0');
        }
    return total;}
};