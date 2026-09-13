class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int, int> count;
        int j = lowLimit;
        int rem = 0;
        int sum = 0;
        int i = 0;

        while(j <= highLimit){

            i = j;

            while(i > 0){

                rem = i % 10;
                sum+=rem;
                i /= 10;

            }

            count[sum]++;
            sum = 0;
            rem = 0;
            j++;

        }

        int max = count.begin()->second;

        for(auto p : count){
            if(p.second > max){
                max = p.second;
            }
        }

        return max;
        
    }
};