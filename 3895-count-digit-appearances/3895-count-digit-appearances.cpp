class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int rem = 0;
        int i = 0;
        int count = 0;

        while(i != nums.size()){
            while(nums[i] != 0){
                rem = nums[i] % 10;
                if(rem == digit){
                    count++;
                }
                nums[i] = nums[i] / 10;
            }
            i++;
        }

        return count;
        
    }
};