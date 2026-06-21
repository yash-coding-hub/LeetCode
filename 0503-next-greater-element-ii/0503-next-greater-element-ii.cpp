class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        bool found = false;

        for(int i=0; i < n; i++){
            int x = nums[i % n];

            for(int j = i+1; j < (i+n); j++){
                int y = nums[j % n];

                if(y > x){
                    found = true;
                    result.push_back(y);
                    break;
                }
            }

            if(!found){
                result.push_back(-1);
            }

            found = false;
        }

        return result;
    }
};