class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int mid = nums.size()/2;
        int count = 0;
        int difference = 0;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[mid]){
                difference = abs(nums[mid] - nums[i]);
                count = count + abs(difference);
            }
        }

        return count;
        
    }
};