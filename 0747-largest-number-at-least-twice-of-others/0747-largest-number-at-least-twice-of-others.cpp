class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0;
        int index = 0;

        for(int i = 0; i<nums.size(); i++){
            max = nums[i];
            for(int j = 1; j<nums.size(); j++){
                if(nums[j] > max){
                    max = nums[j];
                    index = j;
                }
            }
            break;
        }

        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] * 2 > nums[nums.size()-1]){
                return -1;
            }
        }

        return index;
    }
};