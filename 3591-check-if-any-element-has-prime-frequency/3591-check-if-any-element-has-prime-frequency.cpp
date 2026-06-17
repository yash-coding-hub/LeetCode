class Solution {
public:
    bool isprime(int k){

        if(k == 0 || k == 1){
            return false;
        }
        
        for(int i=2; i<k; i++){
            if(k % i == 0){
                return false;
            }
        }

            return true;
        }

    bool checkPrimeFrequency(vector<int>& nums) {

        int n = nums.size();
        bool ans;
        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        for(auto &p : freq){
            int frequency = p.second;

            ans = isprime(frequency);

            if(ans){
                return true;
            }
        }

        
        return false;
    }
};