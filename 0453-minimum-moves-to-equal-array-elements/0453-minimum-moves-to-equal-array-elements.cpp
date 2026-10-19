class Solution {
public:
    int minMoves(vector<int>& nums) {

        int sum = 0;
        int min = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            
            if(min > nums[i]){
                min = nums[i];
            }

        }

        for(int i=nums.size()-1; i>=0; i--){

            sum += abs(nums[i] - min);

        }

        return sum;

    }
};