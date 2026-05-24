class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2){
            return 0;
        }

        int d = 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            int new_d = nums[i+1] - nums[i];
            if(new_d > d){
                d = new_d;
            }
        }

        return d; // return statement
        
    }
};