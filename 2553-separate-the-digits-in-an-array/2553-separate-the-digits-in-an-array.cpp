class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        int target = 0;
        int rem = 0;

        for(int i=nums.size()-1; i>=0; i--){
            target = nums[i];

            while(target > 0){
                rem = target % 10;
                target = target / 10;
                result.push_back(rem);
            }
        }

        reverse(result.begin(), result.end());

        return result;
        
    }
};