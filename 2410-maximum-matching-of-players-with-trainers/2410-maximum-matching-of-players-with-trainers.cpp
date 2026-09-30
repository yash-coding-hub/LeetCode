class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int t = 0;
        int p = 0;
        int n = players.size();
        int m = trainers.size();
        int ans = 0;

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        while(p < n && t < m){

            if(players[p] <=  trainers[t]){
                ans++;
                p++;
                t++;
            }

            else{
                t++;
            }
        }

        return ans;
    }
};