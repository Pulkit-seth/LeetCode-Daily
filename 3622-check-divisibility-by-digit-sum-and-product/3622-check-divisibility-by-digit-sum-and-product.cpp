class Solution {
public:
    bool checkDivisibility(int n) {
        int temp =n;
        int sum=0; 
        int pro = 1;
        while(temp>0) {
            int rem = temp %10;
            sum+= rem;
            pro  = pro * rem;
            temp /= 10; 
        }
        int ans = sum + pro;
        if( n % ans == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};