class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        vector<int> values;
        int num = 0;
        int rem = 0;

        for(int i = num1; i<=num2; i++){
            num = i;

            while(num > 0){
                rem = num % 10;
                num /= 10;
                values.push_back(rem);
            }

            for(int j=1; j<values.size()-1; j++){

                if((values[j] > values[j+1] && values[j] > values[j-1]) || 
                   (values[j] < values[j+1] && values[j] < values[j-1])){

                    ans++;

                }

            }

            values.clear();

        }

        return ans;
    }
};