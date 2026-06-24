class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> freq;

        for(int i : nums){
            if(i % 2 == 0){
                freq[i]++;
            }
        }

        if(freq.size() == 0){
            return -1;
        }

        int target = freq.begin()->second;
        int max = freq.begin()->first;

        for(auto x : freq){
            if(x.second > target){
                target = x.second;
                max = x.first;
            }
        }

        return max;
    }
};