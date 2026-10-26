class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long total_mass = 0;
        total_mass = mass;

        sort(asteroids.begin(), asteroids.end());

        for(int i=0; i<asteroids.size(); i++){

            if(total_mass < asteroids[i]){
                return false;
            }

            else{
                total_mass += asteroids[i];
            }
        }

        return true;
    }
};