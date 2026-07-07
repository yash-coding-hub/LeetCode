class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev = 0;
        long long x = 0;
        long long sum = 0;
        int rem = 0;

        while (n > 0) {
            rem = n % 10;
            if (rem != 0)
                rev = rev * 10 + rem;
            n /= 10;
        }

        rem = 0;

        while (rev > 0) {
            rem = rev % 10;
            x = x * 10 + rem;
            sum += rem;
            rev /= 10;
        }

        return x * sum;
    }
};