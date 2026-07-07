class Solution {
public:
    int countEven(int num) {
        int sum = 0;
        int rem = 0;
        int count = 0;
        int i = 0;

        for(int j=2; j<=num; j++){
            i = j;

            while(i > 0){
                rem = i % 10;
                sum += rem;
                i /= 10;
            }

            if(sum % 2 == 0){
                count++;
            }
            sum = 0;
            rem = 0;
        }

        return count;
        
    }
};