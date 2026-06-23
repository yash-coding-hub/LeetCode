class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;

        for(char c : s){
            freq[c]++;
        }

        int target = freq.begin()->second;

        for(auto p : freq){
            if(p.second != target){
                return false;
            }
        }

        return true;
    }
};