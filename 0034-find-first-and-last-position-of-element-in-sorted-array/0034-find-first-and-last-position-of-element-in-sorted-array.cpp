class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> result;
        bool first = false;
        bool second = false;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                result.push_back(i);
                first = true;
                break;
            }
        }

        if(!(first)){
            result.push_back(-1);
        }

        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i] == target){
                result.push_back(i);
                second = true;
                break;
            }
        }

        if(!(second)){
            result.push_back(-1);
        }

        return result;

    }
};