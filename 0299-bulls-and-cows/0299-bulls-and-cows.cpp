class Solution {
public:
    string getHint(string secret, string guess) {
        int count_bull = 0;
        int count_cow = 0;

        for(int i=0; i<secret.length(); i++){
            if(secret[i] == guess[i]){
                count_bull++;
                secret[i] = '@';
                guess[i] = '#';
            }
        }

        for(int i=0; i<secret.length(); i++){

            for(int j=0; j<guess.length(); j++){
                if(secret[i] == guess[j] && i != j){
                    count_cow++;
                    secret[i] = '@';
                    guess[j] = '#';
                }
            }
        }



        string bull = to_string(count_bull);
        string cow = to_string(count_cow);

        string hint;

        hint += bull;
        hint += "A";
        hint += cow;
        hint += "B";

        return hint;
    }
};