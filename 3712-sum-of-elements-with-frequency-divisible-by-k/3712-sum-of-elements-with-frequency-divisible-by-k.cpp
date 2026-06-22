class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int> freq;
        int sum = 0;

        for(int x : nums){
            freq[x]++;
        }

        for(int i=0; i<nums.size(); i++){
            if(freq[nums[i]] % k == 0){
                i+=freq[nums[i]]-1;
                sum = sum + (freq[nums[i]] * nums[i]);
            }
        }

        return sum;
    }
};