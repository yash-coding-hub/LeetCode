class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> result;

        for(int i=0; i<heights.size(); i++){
            result.push_back(heights[i]);
        }
        
        int count = 0;

        sort(heights.begin(), heights.end());

        for(int i=0; i<heights.size(); i++){
            if(result[i] != heights[i]){
                count++;
            }
        }

        return count;
    }
};