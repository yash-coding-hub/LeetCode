class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length()/2;
        int count_first = 0;
        int count_second = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
               s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
               s[i] == 'O' || s[i] == 'U'){
                count_first++;
               }
        }

        for(int i=n; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
               s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
               s[i] == 'O' || s[i] == 'U'){
                count_second++;
               }
        }

        if(count_first == count_second){
            return true;
        }
        else{
            return false;
        }
        
    }
};