class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        vector<int> sum;
        int ans = 0;

        while(j > i){
            ans += nums[i] + nums[j];
            sum.push_back(ans);
            j--;
            i++;
            ans = 0;
        }

        sort(sum.begin(), sum.end());

        return sum[sum.size()-1];
    }
};