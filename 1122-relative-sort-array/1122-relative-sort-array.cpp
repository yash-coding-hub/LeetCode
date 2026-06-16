class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int, int> freq;
        vector<int> result;
        vector<int> remaining;

        for(int x : arr1) {
            freq[x]++;
        }

        for(int x : arr2) {
            while(freq[x] > 0) {
                result.push_back(x);
                freq[x]--;
            }
        }

        for(auto &p : freq) {
            while(p.second > 0) {
                remaining.push_back(p.first);
                p.second--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for(int i = 0; i < remaining.size(); i++) {
            result.push_back(remaining[i]);
        }

        return result;
    }
};