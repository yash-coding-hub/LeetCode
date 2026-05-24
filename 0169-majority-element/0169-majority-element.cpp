class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
        int j = 0;
        int count = 0;
            while(j<nums.size()){
            if(nums[i] == nums[j]){
                count++;
                j++;
            }
            else{
            j++;
            }
        }
        if(count > nums.size()/2){
            return nums[i];
        }
        else{
            continue;
        }
    }
    return -1;
    }
//   better approach needed for this more clean and clear one

};