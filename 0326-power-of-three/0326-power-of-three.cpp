class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }

        for(double i=0; (i*i*i)<=n; i++){
            if(pow(3,i) == n){
                return true;
            }
        }

        return false;
    }
};