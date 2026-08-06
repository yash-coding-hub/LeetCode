class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        int n = nums.size() / 2;
        int count = 1;
        int result = 0;
        
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                count++;
            }

            else{
                if(count == n){
                    return nums[i];
                }
                else{
                    count = 1;
                }
        }

        }
        if(count == n){
            result = nums[nums.size()-1];
        }

        return result;
    }
};