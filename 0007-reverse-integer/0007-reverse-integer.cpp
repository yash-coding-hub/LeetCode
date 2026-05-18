class Solution {
public:
    int reverse(int x) {


    if(x == INT_MIN){
            return 0;
    }
        int quo = abs(x);
        int rem;
        int result = 0;

        while(quo != 0){

            rem = quo % 10;

            if(result > INT_MAX/10 || 
              (result == INT_MAX/10 && rem > 7)){
                return 0;
            }

            quo = quo/10;

            result = result*10 + rem;
        }

        if(x > 0){
            return result;
        }
        else{
            return -1*result;
        }
    }
};