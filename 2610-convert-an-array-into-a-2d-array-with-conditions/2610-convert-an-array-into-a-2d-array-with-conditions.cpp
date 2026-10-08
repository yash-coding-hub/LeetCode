class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        vector<vector<int>> res;

        while(nums.size() > 0) {

            vector<int> ans;

            for(int i = 0; i < nums.size(); i++) {

                bool found = false;

                for(int j = 0; j < ans.size(); j++) {
                    if(nums[i] == ans[j]) {
                        found = true;
                        break;
                    }
                }

                if(!found) {
                    ans.push_back(nums[i]);
                    nums.erase(nums.begin() + i);
                    i--;
                }
            }

            res.push_back(ans);
        }

        return res;
    }
};