class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int min = INT_MAX;
        int j = 0;

        while(k > 0){
            min = INT_MAX;
            j = 0;

            for(int i=0; i<nums.size(); i++){

                if(nums[i] < min){
                    min = nums[i];
                    j = i;
                }
            }

            while(true){
                nums[j] = multiplier * nums[j];
                k--;
                break;
            }
        }

        return nums;
        
    }
};