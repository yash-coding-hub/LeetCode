class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int count = INT_MAX;
        int mins = 0;

        for(int i=0; i<nums.size(); i++){

            for(int j=0; j<nums.size(); j++){

                if(nums[i] == 1 && nums[j] == 2){
                    mins = abs(i-j);
                    if(mins < count){
                        count = mins;
                    }
                }
            }
        }

        if(count == INT_MAX){
            return -1;
        }

        else{
            return count;
        }
        
    }
};