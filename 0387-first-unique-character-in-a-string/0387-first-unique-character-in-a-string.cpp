class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.length();

        if(n == 1){
            return 0;
        }

        int i = 0;

        while(i < n){

            int j = 0;

            while(j < n){

                if(i != j && s[i] == s[j]){
                    break;
                }

                j++;
            }

            if(j == n){
                return i;
            }

            i++;
        }

        return -1;
    }
};