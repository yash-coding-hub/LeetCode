class Solution {
public:
    string triangleType(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int k = 2;

        if(nums[i] + nums[j] > nums[k] && nums[j] + nums[k] > nums[i] && nums[k] + nums[i] > nums[j])
        {

            if(nums[i] == nums[j] && nums[i] == nums[k]){
                return "equilateral";
            }       

            if(nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]){
                return "scalene";
            }


            return "isosceles";
        }

        return "none";        
    }
};