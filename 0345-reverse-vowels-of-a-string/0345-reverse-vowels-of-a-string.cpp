class Solution {
public:
    string reverseVowels(string s){
        string s1;

        int i = 0;
        int j = s.length()-1;

        while(i <= j){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
               || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I'){
                
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'
                   || s[j] == 'A' || s[j] == 'E' || s[j] == 'O' || s[j] == 'U' || s[j] == 'I'){

                    swap(s[i],s[j]);
                    i++;
                    j--;
                    continue;
                }
                j--;
                continue;
            }
            i++;
        }

        s1 = s;

        return s1;
    }
};