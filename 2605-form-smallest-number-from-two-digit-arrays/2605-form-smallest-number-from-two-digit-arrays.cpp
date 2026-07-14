class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int number = 0;
        int result = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for(int i = 0; i<nums1.size(); i++){
            result = nums1[i];

            for(int j=0; j<nums2.size(); j++){

                if(nums2[j] == result){
                    return result;
                }
            }
            
        }


        if(nums1[0] > nums2[0]){
            number = nums2[0] * 10 + nums1[0];
            return number;
        }

        else{
            number = nums1[0] * 10 + nums2[0];
            return number;
        }
        
    }
};