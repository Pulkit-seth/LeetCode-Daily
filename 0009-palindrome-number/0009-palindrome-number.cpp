class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if (x != 0 && x % 10 == 0) return false;  // Edge case: Numbers like 10, 100, etc.

        int original = x;
        int rev = 0;

        while (x > 0) {
            int rem = x % 10;
            
            // **Check for overflow before updating rev**
            if (rev > (INT_MAX - rem) / 10) return false; 

            rev = rev * 10 + rem;
            x = x / 10;
        }

        return rev == original;
    }
};