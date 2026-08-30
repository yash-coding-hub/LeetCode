class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int min_pos = 0;
        int max_pos = 0;

        for(int i=0; i<nums.size(); i++){

            if(nums[i] > maxi){
                maxi = nums[i];
                max_pos = i+1;
            }

            if(nums[i] < mini){
                mini = nums[i];
                min_pos = i+1;
            }
        }

        int a = min(min_pos, max_pos);
        int b = max(min_pos, max_pos);

        int fromLeft = b;
        int fromRight = nums.size() - a + 1;
        int oneLeftOneRight = a + nums.size() - b + 1;

        return min({fromLeft, fromRight, oneLeftOneRight});
    }
};