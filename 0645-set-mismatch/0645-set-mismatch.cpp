class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<int> freq(n + 1, 0);
        vector<int> result;

        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        int duplicate, missing;

        for(int i = 1; i <= n; i++) {
            if(freq[i] == 2) {
                duplicate = i;
            }

            if(freq[i] == 0) {
                missing = i;
            }
        }

        result.push_back(duplicate);
        result.push_back(missing);

        return result;
    }
};