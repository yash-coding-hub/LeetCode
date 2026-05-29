class Solution {
public:
    int minElement(vector<int>& nums) {

        int i = 0;
        int res = 0;
        int rem = 0;

        while(i < nums.size()){
            
            while(nums[i] != 0){
            rem = nums[i] % 10;
            nums[i] = nums[i] / 10;

            res = res + rem;
            }
            nums[i] = res;
            res = 0;
            i++;
        
    }

    sort(nums.begin(), nums.end());

    return nums[0];
    }

};