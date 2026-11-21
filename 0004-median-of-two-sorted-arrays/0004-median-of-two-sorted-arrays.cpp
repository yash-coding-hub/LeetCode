class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final_array;

        for(int idx1=0; idx1 < nums1.size(); idx1++){

            final_array.push_back(nums1[idx1]);

        }

        for(int idx2=0; idx2 < nums2.size(); idx2++){

            final_array.push_back(nums2[idx2]);

        }

        sort(final_array.begin(), final_array.end());

        if(final_array.size() % 2 == 0){
            int mid = final_array.size() / 2;

            return (double)(final_array[mid] + final_array[mid-1])/2;

        }

        return (double)final_array[final_array.size()/2];
    }
};