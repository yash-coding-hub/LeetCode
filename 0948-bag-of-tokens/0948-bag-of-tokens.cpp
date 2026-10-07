class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {

        sort(tokens.begin(), tokens.end());

        int score = 0;
        int ans = 0;

        int left = 0;
        int right = tokens.size() - 1;

        while(left <= right){

            if(tokens[left] <= power){
                power -= tokens[left];
                score++;
                ans = max(ans, score);
                left++;
            }

            else if(score != 0){
                power += tokens[right];
                score--;
                right--;
            }

            else{
                break;
            }
        }

        return ans;
    }
};