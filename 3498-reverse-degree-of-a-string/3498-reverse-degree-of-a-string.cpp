class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int num = 0;
        int j = 0;

        for(int i=0; i<s.length(); i++){
            num = abs(s[i] - 'z');
            j = i;
            ans += ++num * ++j;
        }

        return ans;
    }
};