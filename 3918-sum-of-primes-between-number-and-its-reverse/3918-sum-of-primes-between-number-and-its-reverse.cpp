class Solution {
public:
    int sumOfPrimesInRange(int n) {
        vector<int> result;
        int r = 0;
        int oldN = n;

        while(n > 0){
            int digit = n % 10;

            r = r * 10 + digit;

            n = n/10;
        }

        for(int i = min(r,oldN); i<=max(r,oldN); i++){

            for(int j = 2; j<=i; j++){

                if(i == 2){
                    result.push_back(2);
                }

                if(i % j == 0){
                    break;
                }

                else if(j == i-1){
                    result.push_back(i);
                    break;
                }

            }
        }

        int sum = 0;

        for(int i=0; i<result.size(); i++){
            sum = sum + result[i];
        }

        return sum;


    }
};