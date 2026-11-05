class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        vector<vector<int>> res;

        vector<int> ans;

        sort(nums.begin(), nums.end());

        ans.push_back(nums[0]);

        int i = 1;

        while(i < nums.size()){

            if(abs(nums[i] - ans[0]) > k){

                res.push_back(ans);
                ans.clear();
                ans.push_back(nums[i]);

            }

            else{
                ans.push_back(nums[i]);
            }

            i++;
        }

        res.push_back(ans);

        return res.size();

    }
};