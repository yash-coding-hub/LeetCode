class Solution {
public:
    int addDigits(int num) {
        int y = 11;
        while(y > 10){
            int rem = num%10;
            int quo = num/10;
            y = rem + quo;
            if(y>10){
                num = y;
                continue;
            }
            else{
                break;
            }
        }
        if(y == 10){
            return 1;
        }
        else{
        return y;  // return this
        }
    }
};