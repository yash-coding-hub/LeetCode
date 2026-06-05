class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() / 2;

        if(nums.size() == 1){
            return 0;
        }

        for(int i = 0; i<nums.size(); i++){
            if(i == 0){
                if(nums[i] > nums[i+1]){
                    return i;
                }
            }

            if(i == nums.size()-1){
                if(nums[i] > nums[i-1]){
                    return i;
                }
            }

            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
                return i;
            }
        }

        return -1;
        
    }
};