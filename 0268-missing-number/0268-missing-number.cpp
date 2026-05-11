class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>nums1;

        int count = 0;

        int n = nums.size();
        for(int i=0; i<n; i++){
            nums1.push_back(i);
        }
        
        int j = 0;

        sort(nums.begin(), nums.end());
            for(int i=0; i<n; i++){
                if(nums[i] != nums1[i]){
                    return i;
                }
            }
            return n;
    }
};