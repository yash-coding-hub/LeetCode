class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int> newnums = nums;

        vector<int> result;

        long long sum = 0;

        int idx = 0;

        int inside = 0;

        while(idx < nums.size()){

            inside = idx + 1;

            while(inside < nums.size()){
                newnums[inside] = newnums[inside] + newnums[inside-1];
                result.push_back(newnums[inside]);

                inside++;
            }

            result.push_back(newnums[idx]);

            newnums = nums;

            idx++;

        }
        
        sort(result.begin(), result.end());

        for(int i=left-1; i<right; i++){

            sum += result[i];

        }

        return sum % (1000000007);
    }
};