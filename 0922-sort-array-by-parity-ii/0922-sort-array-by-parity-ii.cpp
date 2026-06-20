class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                for(int j=0; j<n; j++){
                    if(nums[j] == -1){
                        continue;
                    }
                    
                    if(nums[j] % 2 == 0){
                        result.push_back(nums[j]);
                        nums[j] = -1;
                        break;
                    }
                }
            }

            else{
                for(int j=0; j<n; j++){
                    if(nums[j] == -1){
                        continue;
                    }

                    if(nums[j] % 2 != 0){
                        result.push_back(nums[j]);
                        nums[j] = -1;
                        break;
                    }
                }

            }
        }

        return result;
    }
};