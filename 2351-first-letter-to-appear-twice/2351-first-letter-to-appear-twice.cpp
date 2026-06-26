class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> freq;

        for(char x : s){

            freq[x]++;

            if(freq[x] >= 2){
                return x;
            }

        }

        return '0';
    }
};

// 