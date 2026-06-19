class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> result;

        result.push_back(0);
        int sum = 0;

        for(int i=0; i<gain.size(); i++){
            sum = sum + gain[i];
            result.push_back(sum);
        }

        sort(result.begin(), result.end());

        return result[result.size()-1];

    }
};