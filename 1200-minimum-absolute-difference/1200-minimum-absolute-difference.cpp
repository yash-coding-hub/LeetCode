class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min = abs(arr[0] - arr[1]);
        vector<vector<int>> result;

        for(int i=0; i<arr.size()-1; i++){
            if(abs(arr[i+1] - arr[i]) < abs(min)){
                min = abs(arr[i+1] - arr[i]);
            }
        }

        for(int i=0; i<arr.size()-1; i++){
            if(abs(arr[i+1] - arr[i]) <= abs(min)){
                min = abs(arr[i] - arr[i+1]);
                result.push_back({arr[i],arr[i+1]});
            }
        }

        return result;
    }
};