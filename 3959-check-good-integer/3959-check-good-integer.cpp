class Solution {
public:
    bool checkGoodInteger(int n) {
        int square_sum = 0;
        int digit_sum = 0;
        int rem = 0;

        while(n > 0){
            rem = n % 10;
            square_sum += rem * rem;
            digit_sum += rem;
            n /= 10;
        }

        if((square_sum - digit_sum) >= 50){
            return true;
        }

        return false;
    }
};