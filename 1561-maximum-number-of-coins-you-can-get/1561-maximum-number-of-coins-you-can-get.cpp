class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int m = piles.size();

        int n = m / 3;
        int sum = 0;
        int i = m-2;
        int j = 0;

        while(j < n){
            sum += piles[i];
            j++;
            i-=2;
        }

        return sum;
    }
};