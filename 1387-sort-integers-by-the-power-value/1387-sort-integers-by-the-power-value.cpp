class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<int> result1;
        result1.push_back(lo);

        vector<pair<int,int>>result2;

        for(int i=1; (lo+i)<=hi; i++){
            result1.push_back(lo+i);
        }

        for(int i=0; i<result1.size(); i++){
            lo = result1[i];
            int count = 0;
        while(lo != 1){

        if(lo % 2 == 0){
            lo = lo/2;
            count++;
        }
        else{
            lo = 3 * lo + 1;
            count++;
        }

        }

        result2.push_back({count,result1[i]});

        }

        sort(result2.begin(), result2.end());

        return result2[k-1].second;

    }
};