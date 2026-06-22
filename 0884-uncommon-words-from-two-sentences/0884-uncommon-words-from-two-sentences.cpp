class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> freq;
        string word1 = "";
        vector<string> result;

        for(char ch : s1){
            if(ch != ' '){
            word1 += ch;
            }

            else{
                freq[word1]++;
                word1 = "";
            }
        }

        freq[word1]++;

        string word2 = "";

        for(char ch : s2){
            if(ch != ' '){
            word2 += ch;
            }

            else{
                freq[word2]++;
                word2 = "";
            }
        }

        freq[word2]++;
        for(auto x : freq){
            if(x.second == 1)
        {
        result.push_back(x.first);
            }
        }

        return result;

    }
};