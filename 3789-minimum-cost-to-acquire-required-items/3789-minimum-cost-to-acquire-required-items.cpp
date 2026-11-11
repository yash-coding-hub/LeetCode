class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long total1 = 1LL * cost1 * need1;
        long long total2 = 1LL * cost2 * need2;

        if(need1 == 0 && need2 == 0){
            return 0;
        }

        int Min_need = min(need1, need2);

        long long total_both = 1LL * costBoth * Min_need;

        if(Min_need == need1){
            total_both += 1LL * cost2 * (need2 - need1);
        }

        else if(Min_need == need2){
            total_both += 1LL * cost1 * (need1 - need2);
        }

        long long Final_total = 1LL * total1 + total2;


        long long ans = min(Final_total, total_both);

        long long Max_cost_both = 1LL * costBoth * max(need1, need2);

        return min(Max_cost_both, ans);


    }
};