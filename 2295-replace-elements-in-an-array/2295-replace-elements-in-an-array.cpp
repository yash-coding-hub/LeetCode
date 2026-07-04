class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < operations.size(); i++) {

            int oldValue = operations[i][0];
            int newValue = operations[i][1];

            int index = mp[oldValue];

            nums[index] = newValue;

            mp.erase(oldValue);
            mp[newValue] = index;
        }

        return nums;
    }
};