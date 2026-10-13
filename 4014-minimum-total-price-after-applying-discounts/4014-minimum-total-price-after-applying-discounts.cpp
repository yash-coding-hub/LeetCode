class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double i = prices.size()-1;
        double j = discounts.size()-1;
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        double ans = 0;
        double value = 0;

        while(i >= 0 && j >= 0){
            value = (prices[i] * (100 - discounts[j]));
            ans += value/100;
            prices[i] = 0;
            i--;
            j--;
        }

        for(int i=0; i<prices.size(); i++){
            if(prices[i] != 0){
                ans += prices[i];
            }
        }

        return ans;
        
    }
};