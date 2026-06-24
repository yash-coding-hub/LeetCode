class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int rem = 0;
        int number = 0;
        unordered_map<int,int> freq;
        int n = nums.size();
        int y = 0;

        for(int i=0; i<n; i++){
            y = nums[i];

            while(y > 0){


                rem = y % 10;
                y = y / 10;
                number = number * 10 + rem;

            }

            nums.push_back(number);
            rem = 0;
            number = 0;

        }

        for(int x : nums){
            freq[x]++;
        }

        return freq.size();
    }
};