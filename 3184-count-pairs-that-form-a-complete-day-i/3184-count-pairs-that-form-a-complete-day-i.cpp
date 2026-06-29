class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        long long count = 0;
        
        for(long long i = 0; i<hours.size(); i++){

            for(long long j=i+1; j<hours.size(); j++){

                if((hours[j] + hours[i]) % 24 == 0){
                    count++;
                }
            }
        }

        return count;
    }
};