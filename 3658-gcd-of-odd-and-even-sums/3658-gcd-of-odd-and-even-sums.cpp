class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        vector<int> sumodd;
        vector<int> sumeven;
        while(sumodd.size() < n && sumeven.size() < n){
        for(int i=0; i<n; i++){
            sumeven.push_back(i*2+2);
            int j = i*2 + 1;
            sumodd.push_back(j);
        }
        }

        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<sumodd.size(); i++){
            sum1 = sum1 + sumodd[i];
            sum2 = sum2 + sumeven[i];
        }

        vector<int> count;
        for(int k=1; k<=min(sum1,sum2); k++){
            if(sum1 % k == 0 && sum2 % k == 0){
                count.push_back(k);
            }
            else{
                continue;
            }
        }

        return count[count.size()-1];
        
    }
};