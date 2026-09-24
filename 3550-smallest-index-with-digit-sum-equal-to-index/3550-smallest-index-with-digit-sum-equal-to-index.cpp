class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0;
        int n = 0;
        int sum = 0;
        int rem = 0;

        while(i < nums.size()){
            n = nums[i];

            while(n > 0){

            rem = n % 10;
            sum += rem;
            n /= 10;

            }

            if(i == sum){
                return i;
            }

            else{
                i++;
                sum = 0;
            }
        }

        return -1;
    }
};