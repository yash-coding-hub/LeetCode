class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        int vowel_count = 0;
        int j = 0;
        int target = 0;
        string result = "";

        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                target++;
                word.push_back(s[i]);
            }
            else if(s[i] == ' '){
                j = i;
                result += word;
                word = "";
                break;
            }
            else{
                j = i;
                word.push_back(s[i]);
            } 
            j = i;
        }

        result += word;


        if(j+1 == s.length()){
            return result;
        }

        for(int i=j+1; i<s.length(); i++){
            if(s[i] == ' '){
                if(vowel_count == target){
                    reverse(word.begin(), word.end());
                    result += " ";
                    result += word;
                    word = "";
                }

                else{
                    result += " ";
                    result += word;
                    word = "";
                }

                vowel_count = 0;
            }

            else{
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    vowel_count++;
                    word.push_back(s[i]);
                }
                else{
                    word.push_back(s[i]);
                }
            }

        }

        if(vowel_count == target){
            reverse(word.begin(), word.end());
            result += " ";
            result += word;
        }
        else{
            result += " ";
            result += word;
        }


        return result;
    }
};