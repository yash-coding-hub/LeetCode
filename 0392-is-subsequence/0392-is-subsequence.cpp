class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        int k = 0;
        int count = 0;

        while(i < s.length() && j < t.length()){

            if(s[i] != t[j]){
                j++;
            }
            if(s[i] == t[j]){

                    count++;
                    i++;

                    if(k > j){
                        return false;
                    }

                    k = j;
                    j++;

            }

        }

        if(count == s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};