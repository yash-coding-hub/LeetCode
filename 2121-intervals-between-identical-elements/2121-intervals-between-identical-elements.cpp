class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        unordered_map<int, vector<int>> mp;
        vector<long long> ans(arr.size(), 0);

        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]].push_back(i);
        }

        for(auto &it : mp) {
            vector<int>& idx = it.second;

            long long sum = 0;
            int n = idx.size();

            for(int i = 0; i < n; i++) {
                sum += idx[i];
            }

            long long leftSum = 0;

            for(int i = 0; i < n; i++) {
                long long left = 1LL * idx[i] * i - leftSum;
                long long right = (sum - leftSum - idx[i]) - 1LL * idx[i] * (n - i - 1);

                ans[idx[i]] = left + right;

                leftSum += idx[i];
            }
        }

        return ans; // Final Ans
    }
};
