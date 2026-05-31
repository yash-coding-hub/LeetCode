class Solution {
public:
    string convertToBase7(int num) {
        string result;
        int rem = 1;
        int n = abs(num);

        if(num == 0){
            return "0";
        }

        while(n > 0){
            rem = n % 7;
            result.push_back(rem + '0');

            n = n / 7;
        }

        reverse(result.begin(), result.end());

        if(num < 0){
            result = '-' + result;
        }

        return result;
    }
};