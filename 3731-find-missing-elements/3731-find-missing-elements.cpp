class Solution {
public:
    bool present(int i, vector<int> nums){

        for(int j=0; j<nums.size(); j++){
            if(nums[j] == i){
                return true;
            }
        }

        return false;
    }

    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());

        for(int i=nums[0]; i<=nums[nums.size()-1]; i++){
            if(!present(i, nums)){
                result.push_back(i);
            }
        }

        return result;
    }
};