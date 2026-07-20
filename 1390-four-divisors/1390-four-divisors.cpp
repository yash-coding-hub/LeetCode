class Solution {
public:
    int count_divisors(int k){
        int count = 0;
        int sum = 0;
        for(int i=1; i*i<=k; i++){

        if(k % i == 0){

            if (i == k / i) {
                count++;
                sum += i;
            }
            else {
                count += 2;
                sum += i + (k / i);
            }
        }

        }

        if(count == 4){
            return sum;
        }

        else{
            return 0;
        }
    }


    int sumFourDivisors(vector<int>& nums) {
        int final_sum = 0;

        for(int i=0; i<nums.size(); i++){
            final_sum += count_divisors(nums[i]);
        }


        return final_sum;


    }
};