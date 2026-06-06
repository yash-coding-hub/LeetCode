class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums){
        vector<int> leftsum = {0};
        vector<int> rightsum;
        vector<int> ans;
        int Lsum = 0;
        int Rsum = 0;

        if(nums.size() == 1){
            ans.push_back(0);
            return ans;
        }

        for(int i = 1; i < nums.size(); i++){
            Lsum = Lsum + nums[i-1];
            leftsum.push_back(Lsum);
        }

        for(int j = nums.size()-2; j>=0; j--){
            Rsum = Rsum + nums[j+1];
            rightsum.push_back(Rsum);
        }
        
        reverse(rightsum.begin(), rightsum.end());
        rightsum.push_back(0);

        for(int i = 0; i<nums.size(); i++){
            ans.push_back(abs(leftsum[i] - rightsum[i]));
        }

        return ans;
    }
};