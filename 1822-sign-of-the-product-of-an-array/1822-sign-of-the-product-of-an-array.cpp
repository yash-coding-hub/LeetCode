class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long x = 1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                x = x * 1;
            }
            else if(nums[i] < 0){
                x = x * (-1);
            }
            else{
                x = x * nums[i];
            }
        }

        if(x > 0){
            return 1;
        }

        else if(x < 0){
            return -1;
        }

        else{
            return 0;
        }
        
    }
};