class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int target = 0;
        bool found = true;
        int find = false;

        for(int i=0; i<nums.size()-1; i++){

            if(nums[i] + 1 == nums[i+1]){
                sum+=nums[i+1];
            }
            else{
                break;
            }

        }

        while(found){

            target = sum;

            for(int i=0; i<nums.size(); i++){

                if(nums[i] == target){
                    sum++;
                    find = true;
                    break;
                }

            }

            if(!find){
                found = false;
            }

            else{
                find = false;
            }

        }

        return target;
    }
};