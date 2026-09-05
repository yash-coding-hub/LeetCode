class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int count = 0;
        int counting = 1;
        vector<int> counts;

        for(int i=0; i<suits.size(); i++){
            if(suits[i] == suits[0]){
                count++;
            }
        }

        if(count == suits.size()){
            return "Flush";
        }

        sort(ranks.begin(), ranks.end());

        for(int i=0; i<ranks.size()-1; i++){

            if(ranks[i] == ranks[i+1]){

                counting++;
                continue;

            }

            counts.push_back(counting);
            counting = 1;

        }

        counts.push_back(counting);

        sort(counts.begin(), counts.end());

        if(counts[counts.size()-1] >= 3){
            return "Three of a Kind";
        }

        else if(counts[counts.size()-1] == 2){
            return "Pair";
        }

        else{
            return "High Card";
        }
        
    }
};