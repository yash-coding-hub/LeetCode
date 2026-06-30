class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int i = 0;
        int n = chalk.size();
        long long sum = 0;

        int target = chalk[i % n];

        for(int i=0; i<chalk.size(); i++){
            sum = sum + chalk[i];
        }

        while(k > sum){
            k = k % sum;
            if(k < sum){
                break;
            }
        }

        while(k > 0){
            if(target > k){
                break;
            }
            
            k = k - target;
            i++;
            target = chalk[i % n];
        }

        return (i % n);
    }
};