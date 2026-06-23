class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        if(nums.size() == 1){
            result.push_back(nums[0]);
            return result;
        }

        if(nums[0] + 1 != nums[1] && freq[nums[0]] == 1){
            result.push_back(nums[0]);
        }

        for(int i=1; i<nums.size()-1; i++){
            if(freq[nums[i]] == 1 && nums[i-1] != nums[i] - 1 && nums[i] + 1 != nums[i+1]){
                result.push_back(nums[i]);
            }
        }

        if(nums[nums.size()-1] - 1 != nums[nums.size()-2] && freq[nums[nums.size()-1]] == 1){
            result.push_back(nums[nums.size()-1]);
        }

        return result;
        
    }
};