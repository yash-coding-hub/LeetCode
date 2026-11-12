class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<int> ans = nums;

        sort(nums.begin(), nums.end());
        
        int start_idx = -1;

        int last_idx = -1;

        for(int i=0; i<nums.size(); i++){

            if(nums[i] != ans[i]){
                start_idx = i;
                break;
            }
        }

        for(int j=nums.size()-1; j>=0; j--){

            if(nums[j] != ans[j]){
                last_idx = j;
                break;
            }
        }

        if(start_idx == -1){
            return 0;
        }

        return last_idx - start_idx + 1;
    }
};