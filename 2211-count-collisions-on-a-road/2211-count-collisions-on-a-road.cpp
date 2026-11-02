class Solution {
public:
    int countCollisions(string directions) {
        int collisions = 0;

        int i = 0;
        int j = directions.size()-1;

        while(i < directions.size() && directions[i] == 'L'){
            i++;
        }

        while(j >= 0 && directions[j] == 'R'){
            j--;
        }

        for(int k = i; k<=j; k++){

            if(directions[k] == 'S'){
                continue;
            }

            else{
                collisions++;
            }
        }

        return collisions;
    }
};