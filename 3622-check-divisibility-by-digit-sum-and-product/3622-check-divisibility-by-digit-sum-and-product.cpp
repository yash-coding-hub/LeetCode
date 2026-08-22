class Solution {
public:
    bool checkDivisibility(int n) {
        int rem = 0;
        int sum = 0;
        int i = n;
        int product = 1;
        int j = n;

        while(i > 0){
            rem = i % 10;
            i = i/10;
            sum+=rem;
        }

        while(n > 0){
            rem = n % 10;
            n /= 10;
            product*=rem;
        }

        int avg = sum + product;

        if(j % avg == 0){
            return true;
        }

        else{
            return false;
        }
    }
};