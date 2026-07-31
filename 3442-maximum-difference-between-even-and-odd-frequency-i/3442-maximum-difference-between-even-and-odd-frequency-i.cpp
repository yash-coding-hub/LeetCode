class Solution {
public:
    int maxDifference(string s) {
        int count = 1;
        int even = INT_MAX;
        int odd = 0;

        sort(s.begin(), s.end());

        for(int i=0; i<s.length()-1; i++){
            if(s[i] == s[i+1]){
                count++;
                continue;
            }

            if(count % 2 == 0 && count < even){
                even = count;
            }
                
            if(count > odd && count % 2 != 0){
                odd = count;
            }

            count = 1;
        }

        if(count % 2 == 0 && count < even){
            even = count;
        }

        else{
            if(count > odd && count % 2 != 0){
                odd = count;
            }
        }

        return odd-even;
        
    }
};