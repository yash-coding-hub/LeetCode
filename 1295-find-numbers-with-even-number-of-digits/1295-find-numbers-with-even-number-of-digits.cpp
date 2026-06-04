class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int rem = 0;
        int i = 0;
        int result = 0;

        while(i < nums.size()){

            while(nums[i] != 0){

                rem = nums[i] % 10;
                count++;
                nums[i] = nums[i] / 10;
            }
            
            if(count % 2 == 0){
                result++;
                count = 0;
                i++;
            }

            else{
                count = 0;
                i++;
            }
        }

        return result;
        
    }
};