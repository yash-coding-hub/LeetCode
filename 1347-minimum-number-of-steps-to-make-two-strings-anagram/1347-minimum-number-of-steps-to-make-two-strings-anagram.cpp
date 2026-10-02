class Solution {
public:
    int minSteps(string s, string t) {
        map<char, int> freq_s;
        map<char, int> freqt;
        int ans = 0;

        for(char i : s){
            freq_s[i]++;
        }

        for(char j : t){
            freqt[j]++;
        }

        for(auto it : freqt) {
            if(it.second > freq_s[it.first]) {
            ans += it.second - freq_s[it.first];
        }
        }

        return ans;
    }
};