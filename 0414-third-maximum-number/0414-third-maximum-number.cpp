class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> result;

        result.push_back(nums[0]);
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] != nums[i+1]){
                result.push_back(nums[i+1]);
            }
        }

        sort(result.begin(), result.end(), greater<int>());

        if(result.size() < 3){
            return result[0];
        }

    

    return result[2];
}

};