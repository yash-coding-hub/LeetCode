class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                
                int first = nums[i];
                while(first >= 10) {
                    first /= 10;
                }

                int last = nums[j] % 10;
                if(__gcd(first, last) == 1) {
                    count++;
                }
            //     bool common = false;
            //     for(int k=2; k<=min(first,last); k++){
            //     if( first % k == 0 && last % k == 0){
            //         common = true;
            //         break;
            //     }
            //     }

            //     if(common == false){
            //         count++;
            //     }
            }
        }
        return count;
        
    }
};