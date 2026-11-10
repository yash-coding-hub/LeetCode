class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> finds;
        int to_find = 0;

        for(int idx = 0; idx<nums.size(); idx++){

            to_find = target - nums[idx];

            if(finds.find(to_find) != finds.end()){
                return {finds[to_find],idx};
            }

            finds[nums[idx]] = idx; 
        }

        return {};
    }
};