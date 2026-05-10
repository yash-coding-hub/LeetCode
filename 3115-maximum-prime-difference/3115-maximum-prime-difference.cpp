class Solution {
public:
int dist1;
int dist2;
        bool isprime(int n){
            if(n <= 1){
                return false;
            }

            for(int j=2; j<n; j++){
                if(n % j == 0){
                    return false;
                }
            }
            return true;
        }

    int maximumPrimeDifference(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
    int n = nums[i];
        if(isprime(n)){
            dist1 = i;
            i = nums.size();
        }
    }

    
    for(int j=nums.size()-1; j>0; j--){
    int m = nums[j];
        if(isprime(m)){
            dist2 = j;
            j = 0;
        }
    }
    return dist2-dist1;
    }
};