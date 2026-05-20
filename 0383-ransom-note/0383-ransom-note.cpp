class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n = ransomNote.length();
        int m = magazine.length();

        if(n > m){
            return false;
        }

        int i = 0;
        int j = 0;

        while(i < n){
            if(ransomNote[i] == magazine[j]){
                i++;
                magazine[j] = '#';
                j = 0;
            }

            else if(j == m){
                return false;
            }

            else{
                j++;
            }
        }

        return true;
    }
};