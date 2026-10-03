class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> nums1;
        int i = 0;

        vector<vector<int>> res;

        while(i < nums.size()){

            if(nums1.size() < 3){
                nums1.push_back(nums[i]);
                i++;
            }

            else{

                if(abs(nums1[0] - nums1[2]) > k){
                    return {};
                }

                else{
                    res.push_back(nums1);
                    nums1.clear();
                }

            }

        }

        if(nums1[2] - nums1[0] > k){
            return {};
        }

        else{
            res.push_back(nums1);
        }

        return res;
    }
};