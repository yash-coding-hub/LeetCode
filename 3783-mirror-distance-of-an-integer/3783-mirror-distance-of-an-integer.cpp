class Solution {
public:
    int mirrorDistance(int n) {
        int rem = 0;
        long long ans = 0;
        int j = n;

        while(n > 0){
            rem = n % 10;
            n /= 10;

            ans = ans * 10 + rem;

        }

        return abs(j - ans);
        
    }
};