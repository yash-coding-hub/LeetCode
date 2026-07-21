class Solution {
public:
    int nonSpecialCount(int l, int r) {

        int limit = sqrt(r);

        // Sieve of Eratosthenes
        vector<bool> prime(limit + 1, true);

        prime[0] = false;
        prime[1] = false;

        for (int i = 2; i * i <= limit; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= limit; j += i) {
                    prime[j] = false;
                }
            }
        }

        int special = 0;

        // Count prime squares in [l, r]
        for (int i = 2; i <= limit; i++) {
            if (prime[i]) {
                long long square = 1LL * i * i;

                if (square >= l && square <= r) {
                    special++;
                }
            }
        }

        // Total numbers - special numbers
        return (r - l + 1) - special;
    }
};