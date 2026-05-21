class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;

        if(nums.size() == 1){
            return nums[0];
        }

        for(int i=0; i<nums.size(); i++){

            if(i == 0){
                if(nums[i] != nums[i+1]){
                    sum += nums[i];
                }
            }

            else if(i == nums.size()-1){
                if(nums[i] != nums[i-1]){
                    sum += nums[i];
                }
            }

            else{
                if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){
                    sum += nums[i];
                }
            }
        }

        
        return sum;
    }
};