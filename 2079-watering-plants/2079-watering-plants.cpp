class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int steps = 0;
        int idx = 0;
        int refill = capacity;

        while(idx < plants.size()){

            if(capacity < plants[idx]){

                steps += (idx*2);
                capacity = refill;
                idx--;

            }

            else{

                capacity -= plants[idx];
                plants[idx] = 0;
                steps++;

            }

            idx++;
        }

        return steps;
    }
};