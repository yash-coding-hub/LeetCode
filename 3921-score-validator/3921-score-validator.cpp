class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> result;
        
        int score = 0;
        int counter = 0;

        for(int i=0; i<events.size(); i++){
            if(counter >= 10){
                break;
            }
            else{
            if(events[i] == "W"){
                counter++;
            }

            else if(events[i] == "WD"){
                score++;
            }

            else if(events[i] == "NB"){
                score++;
            }

            else if(events[i] == "0" || events[i] == "1" || events[i] == "2" || events[i] == "3" || 
            events[i] == "4" || events[i] == "6"){
                score += stoi(events[i]);
            }
            }
        } 

        result.push_back(score);
        result.push_back(counter);

        return result;
        
    }
};