class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans = 0;

        for(int i=0; i<nums.size(); i++){

            for(int j=i+1; j<nums.size(); j++){

                for(int k=j+1; k<nums.size(); k++){

                    for(int q=k+1; q<nums.size(); q++){

                        if(nums[i] + nums[j] + nums[k] == nums[q]){
                            ans++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};