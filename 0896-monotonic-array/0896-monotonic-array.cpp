class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase_count = 1;
        int decrease_count = 1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] >= nums[i+1]){
                decrease_count++;
            }
        }

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] <= nums[i+1]){
                increase_count++;
            }
        }

        if(increase_count == nums.size() || decrease_count == nums.size()){
            return true;
        }
        else{
            return false;
        }

    }
};