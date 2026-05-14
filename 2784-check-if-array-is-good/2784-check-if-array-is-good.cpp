class Solution {
public:
    bool isGood(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int max = nums[n-1];

        if(nums.size() == 1){
            return false;
        }

        for(int i=0; i<n-2; i++){
            if(nums[i] != nums[i+1]){
                result.push_back(nums[i]);
            }
        }

        if(nums.size() >= 3){
            if(nums[n-2] == nums[n-1] && nums[n-3] == nums[n-1]){
                return false;
        }
    }

        if(nums[n-1] == nums[n-2]){
            if(nums[0] == 1){
            result.push_back(max);
            result.push_back(max);
        } 
        else{
            return false;
        }
        }
        else{
            return false;
        }

        int m = result.size();

        if(abs(n-m) == 0 && result.size() == max+1){
            return true;
        }
        else{
            return false;
        }

        // if(nums.size() == 1){
        //     return false;
        // }

        // for(int i=0; i<n-2; i++){

        //     if(nums[i] == i+1){
                
        //     }
        // }


    }
};