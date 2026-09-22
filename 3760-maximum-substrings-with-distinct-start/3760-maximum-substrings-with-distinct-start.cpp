class Solution {
public:
    int maxDistinct(string s) {
        int ans = 1;
        sort(s.begin(), s.end());

        for(int i=0; i<s.length()-1; i++){
            if(s[i] != s[i+1]){
                ans++;
            }
        }

        return ans;
    }
};