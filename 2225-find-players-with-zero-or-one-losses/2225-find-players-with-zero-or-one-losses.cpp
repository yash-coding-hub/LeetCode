class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> res;
        vector<int> ans;

        map<int, int> looses;

        int x = 0;
        int y = 0;

        for(int i=0; i<matches.size(); i++){

            x = matches[i][1];
            y = matches[i][0];
            looses[y];
            looses[x]++;

        } 

        for(auto it : looses){

            if(it.second == 0){
                ans.push_back(it.first);
            }

        }

        res.push_back(ans);
        ans.clear();

        for(auto p : looses){

            if(p.second == 1){
                ans.push_back(p.first);
            }
        }

        res.push_back(ans);
        ans.clear();

        return res;
    }
};