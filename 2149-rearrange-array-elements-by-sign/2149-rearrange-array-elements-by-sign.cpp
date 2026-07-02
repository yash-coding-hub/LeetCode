class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        vector<int> positive;
        vector<int> negative;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }

            else{
                negative.push_back(nums[i]);
            }
        }

        int j = 0;
        int k = 0;

        for(int i=0; i<nums.size(); i++){
            if(i % 2 == 0){
                result[i] = positive[j];
                j++;
            }
            else{
                result[i] = negative[k];
                k++;
            }
        }

        return result;
        
    }
};