class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        float sum = 0;
        float count = 0;

        while(i < nums.size()-1){

            for(int j=i+1; j<nums.size(); j++){

                sum+=nums[j];
                count++;

            }

            if(nums[i] > (sum/count)){
                ans++;
            }

            sum = 0;
            count = 0;
            i++;
        }

        return ans;
        
    }
};