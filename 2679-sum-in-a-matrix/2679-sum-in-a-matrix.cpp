class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int idx = 0;
        int operations = 0;
        vector<int> v;
        int sum = 0;

        while(operations < nums[0].size()){

        for(int i=0; i<nums.size(); i++){
            int max = nums[i][0];

            for(int j=0; j<nums[i].size(); j++){
                if(nums[i][j] > max){
                    max = nums[i][j];
                    idx = j;
                }
            }

            nums[i][idx] = -1;

            idx = 0;
            
            v.push_back(max);
        }

        sort(v.begin(), v.end());

        sum = sum + v[v.size()-1];

        v.clear();

        operations++;
        }

        return sum;

        
    }
};