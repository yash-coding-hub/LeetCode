class Solution {
public:
    bool isPerfectSquare(int num) {
    for(double i=0; (i*i)<=num; i++){

            if(i*i == num){
                return true;
            }
            else if(i*i > num){
                break;
            }
        }

        return false;
    }
};