class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        int j = 0;
        int max = INT_MIN;

        while(result.size() != arr.size()-1){

        for(int i=j+1; i<arr.size(); i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        result.push_back(max);
        max = 0;
        j++;

        }

        result.push_back(-1);

        return result;


        
    }
};