class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        // int i = 0;

        // while(i < nums1.size()){
        //     int target = nums1[i];

        //     for(int j = 0; j<nums2.size()-1; j++){
        //         if(nums2[j] == target){

        //             while(j < nums2.size()){
        //                 if(nums2[j+1] > target){
        //                     result.push_back(nums2[j]);
        //                     break;
        //                 } 
        //                 else{
        //                     j++;
        //                 }
        //             }
        //             result.push_back(-1);
        //             break;
        //     }
                        
        //     i++;
        // }

        // return result;

        for(int i = 0; i<nums1.size(); i++){
            int target = nums1[i];

            for(int j = 0; j<nums2.size(); j++){
                if(nums2[j] == target){

                    bool found = false;

                    int k = j+1;

                    while(k < nums2.size()){

                        if(nums2[k] > target){

                            result.push_back(nums2[k]);
                            found = true;
                            break;

                        }

                        else{
                            k++;
                        }
                    } 

                    if(found == false){
                        result.push_back(-1);
                    }

                    break;
                }
            }

        }

        return result;
        
    }
};

