class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {

        vector<int> result;
        int res = 0;

        sort(restaurants.begin(), restaurants.end(),
        [](vector<int>& a, vector<int>& b) {
        if (a[1] == b[1])
            return a[0] > b[0];  
        return a[1] > b[1];      
         });

        for(int i=0; i<restaurants.size(); i++){

            if((restaurants[i][2] == 1 || veganFriendly == 0) && restaurants[i][3] <= maxPrice 
               && restaurants[i][4] <= maxDistance){

                res = restaurants[i][0];
                result.push_back(res);
               } 
        }

        return result;
        
    }
};