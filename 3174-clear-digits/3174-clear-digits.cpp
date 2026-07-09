class Solution {
public:
    string clearDigits(string s) {
        
        
        for(int i=1; i<s.length(); i++){
            if(s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' ||
               s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0'){
                s.erase(i, 1);
                s.erase(i-1, 1);
                i = 0;
               }
        }

        return s;
    }
};