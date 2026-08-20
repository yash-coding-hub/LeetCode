class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                count++;
                i++;
            }
        }

        if(count == nums.size()/2){
            return true;
        }

        else{
            return false;
        }
    }
};