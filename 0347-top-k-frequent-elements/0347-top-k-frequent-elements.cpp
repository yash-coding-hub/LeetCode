class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        vector<pair<int,int>> freq;

        int count = 1;

        for(int i=1; i<nums.size(); i++){

            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                freq.push_back({count, nums[i-1]});
                count = 1;
            }
        }

        freq.push_back({count, nums[nums.size()-1]});

        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        vector<int> result;

        for(int i=0; i<k; i++){
            result.push_back(freq[i].second);
        }

        return result;
    }
};