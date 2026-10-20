class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long score = 0;
        int n = nums.size();
        int k = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                nums[i] = -1 * nums[i];
            }
        }

        sort(nums.begin(), nums.end());

        for(int i=nums.size()-1; i>=n/2; i--){

            score += pow(nums[i],2);
            k = i;

        }

        for(int j=0; j<k; j++){

            score -= pow(nums[j],2);

        }

        return score;
    }
};