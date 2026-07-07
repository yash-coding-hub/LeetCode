class Solution {
public:
    string processStr(string s) {
        string result = "";
        int i = 0;

        while(i < s.length()){
            if(s[i] == '%'){
                reverse(result.begin(), result.end());
                i++;
            }

            else if(s[i] == '#'){
                result += result;
                i++;
            }

            else if(s[i] == '*'){
                if(result.size() > 0){
                    result.pop_back();
                    i++;
                }
                else{
                    i++;
                    continue;
                }
            }

            else{
                result += s[i];
                i++;
            }
        }

        return result;
        
    }
};