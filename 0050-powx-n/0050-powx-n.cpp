class Solution {
public:
    double myPow(double x, double n) {

        double i = x;
        double count = 2;

        if(n == 0 || x == 1 || (n < 0 && x == -1)){
            return 1;
        }

        if(x == -1){
            return -1;
        }

        if(n - x > INT_MAX || n - x < INT_MIN){
            return 0;
        }

        if(n < 0){
            x = 1/x;
            i = x;
            n = -1 * n;
        }

        while(count <= n){
            i = i * x;
            count++;
        }

        return i;
        
    }
};