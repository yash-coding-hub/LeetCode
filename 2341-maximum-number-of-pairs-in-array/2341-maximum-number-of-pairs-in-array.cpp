class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int count = 0;
        int res = 0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = -1;
                nums[i+1] = -1;
                count++;
                i++;
            }
        }

        for(int j=0; j<nums.size(); j++){
            if(nums[j] != -1){
                res++;
            }
        }

        result.push_back(count);
        result.push_back(res);

        return result;
        
    }
};