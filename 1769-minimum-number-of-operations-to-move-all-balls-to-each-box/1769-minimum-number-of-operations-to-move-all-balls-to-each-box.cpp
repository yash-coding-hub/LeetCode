class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> result;
        int dist = 0;
        int j = 0;

        while(j < boxes.length()){

            for(int i=0; i<boxes.length(); i++){

                if(boxes[i] == '1' && i != j){
                    dist += abs(i-j);
                }

            }

            result.push_back(dist);
            dist = 0;
            j++;
        }    

        return result;
    }
};