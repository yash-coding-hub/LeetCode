class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int operations = 0;
        int i = 0;
        int j = nums.size()-1;

        sort(nums.begin(), nums.end());

        while(j > i){

            if(nums[i] + nums[j] == k){
                nums[i] = 0;
                nums[j] = 0;
                operations++;
                i++;
                j--;
            }

            else if(nums[i] + nums[j] > k){
                j--;
            }

            else{
                i++;
            }

        }

        return operations;
    }
};