class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    result.push_back(nums2[j]);
                    nums2[j] = -1;
                    break;
                }
            }
        }

        sort(result.begin(), result.end());

        vector<int>final_result;

        if(result.size() > 0){
            final_result.push_back(result[0]);
        }
        else{
            return result;
        }

        for(int i=0; i<result.size()-1; i++){
            if(result[i] != result[i+1]){
                final_result.push_back(result[i+1]);
            }
        }
        return final_result;
    }
};