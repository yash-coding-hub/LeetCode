class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> freq;
        vector<int> result;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == key){
                result.push_back(nums[i+1]);
            }
        }

        for(int x : result){
            freq[x]++;
        }

        int target = freq.begin()->second;
        int max = freq.begin()->first;


        for(auto p : freq){
            if(p.second > target){
                max = p.first;
            }
        }

        return max;
        
    }
};