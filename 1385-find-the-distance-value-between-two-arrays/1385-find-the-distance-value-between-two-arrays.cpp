class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        vector<int>result;
        int dist = 0;
        // sort(arr1.begin(), arr1.end());
        // sort(arr2.begin(), arr2.end());

        for(int i=0; i<arr1.size(); i++){
            for(int j=0; j<arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                dist++;
            }
        }

        if(dist == 0){
            result.push_back(arr1[i]);
        }
        else{
            dist = 0;
        }
        }
        

        return result.size();
    }
};