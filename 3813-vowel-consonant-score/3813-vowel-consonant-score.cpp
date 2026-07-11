class Solution {
public:
    int vowelConsonantScore(string s) {
        int c = 0;
        int v = 0;

        for(int i=0; i<s.length(); i++){

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                v++;
            }

            else if(s[i] == ' ' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0'){

                continue;
                
            }

            else{
                c++;
            }
        }

        if(c == 0){
            return 0;
        }


        return v/c;
    }
};