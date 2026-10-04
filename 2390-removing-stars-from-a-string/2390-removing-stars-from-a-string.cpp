class Solution {
public:
    string removeStars(string s) {

        string ans = "";
        int star = 0;

        if(s[0] == '*'){
            s.erase();
        }

        ans += s[0];

        for(int i=1; i<s.length(); i++){

            if(s[i] != '*'){
                ans += s[i];
            }

            else{
                star++;
            }

            while(star != 0){

            ans.pop_back();
            star--;

            }
        }

        return ans;
        
    }
};