class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> mp;
        string ans(s.length(), ' ');
        int index = 0;

        for(char ch : s){
            mp[ch]++;
        }

        int maxi = 0;
        char maxChar;

        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
                maxChar = it.first;
            }
        }  

        if(maxi > (s.length()+1) / 2){
            return "";
        }

        for(int i = 0; i < maxi; i++){
            ans[index] = maxChar;
            index += 2;
        }
        mp[maxChar] = 0;

        for(auto &it : mp){
            char ch = it.first;

            while(it.second > 0){

                if(index >= s.length())
                index = 1;

            ans[index] = ch;
            index += 2;
            it.second--;
            }
        }

        return ans;
    }
};