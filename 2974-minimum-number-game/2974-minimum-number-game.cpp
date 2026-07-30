class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

        sort(nums.begin(), nums.end());

        int alice = 0;
        int bob = 1;

        while(arr.size() != nums.size()){
            arr.push_back(nums[bob]);
            arr.push_back(nums[alice]);
            alice+=2;
            bob+=2;
        }

        return arr;
    }
};