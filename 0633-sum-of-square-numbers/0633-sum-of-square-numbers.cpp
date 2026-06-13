class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0;

        long long j = pow(c, 0.5);

        while(i <= j){

                if(i*i + j*j == c){
                    return true;
                }

                else if(i*i + j*j > c){
                    j--;
                }

                else{
                    i++;
                }
            }

        return false; // return false
    }
};