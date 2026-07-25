class Solution {
public:
    int maxProduct(int n) {
        int rem = 0;
        int ans = 1;
        vector<int> result;

        while(n > 0){
            rem = n % 10;
            result.push_back(rem);
            n = n / 10;
        }

        sort(result.begin(), result.end());

        ans = result[result.size()-1] * result[result.size()-2];

        return ans;
        
    }
};