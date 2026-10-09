class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        if(n <= 4){
            return 0;
        }

        return min({
            nums[n-1] - nums[3],  // 3 smallest change
            nums[n-4] - nums[0],  // 3 largest change
            nums[n-3] - nums[1],  // 1 smallest + 2 largest
            nums[n-2] - nums[2]   // 2 smallest + 1 largest
        });
    }
};