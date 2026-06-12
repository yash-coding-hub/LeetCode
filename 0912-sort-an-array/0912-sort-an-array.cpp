class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return nums;
        // have to do merge sort for solving this que as merge sort is the only sorting way of 
        // sorting this nums array in n log n time 
    }
};