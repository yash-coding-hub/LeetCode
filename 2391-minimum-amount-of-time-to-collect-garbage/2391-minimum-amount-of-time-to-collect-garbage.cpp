class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int total_g = 0;
        int total_p = 0;
        int total_m = 0;

        int last_g = 0;
        int last_p = 0;
        int last_m = 0;

        // Glass
        for(int i = 0; i < garbage.size(); i++) {

            for(int j = 0; j < garbage[i].length(); j++) {

                if(garbage[i][j] == 'G') {
                    total_g++;
                    last_g = i;
                }
            }
        }

        // Paper
        for(int i = 0; i < garbage.size(); i++) {

            for(int j = 0; j < garbage[i].length(); j++) {

                if(garbage[i][j] == 'P') {
                    total_p++;
                    last_p = i;
                }
            }
        }

        // Metal
        for(int i = 0; i < garbage.size(); i++) {

            for(int j = 0; j < garbage[i].length(); j++) {

                if(garbage[i][j] == 'M') {
                    total_m++;
                    last_m = i;
                }
            }
        }

        int time_g = 0;
        int time_p = 0;
        int time_m = 0;

        for(int i = 0; i < last_g; i++) {
            time_g += travel[i];
        }

        for(int i = 0; i < last_p; i++) {
            time_p += travel[i];
        }

        for(int i = 0; i < last_m; i++) {
            time_m += travel[i];
        }

        int time = total_g + total_p + total_m
                 + time_g + time_p + time_m;

        return time;
    }
};