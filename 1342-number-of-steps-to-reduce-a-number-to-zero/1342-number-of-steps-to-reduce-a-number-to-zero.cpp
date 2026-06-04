class Solution {
public:
    int numberOfSteps(int num) {
        long long i = num;
        long long steps = 0;

        while(i > 0){
            if(i % 2 == 0){
                i = i / 2;
                steps++;
            }
            else{
                i = i - 1;
                steps++;
            }
        }

        return steps;        
    }
};