// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int product = 1;
//         int sum = 0;

//         while(n > 0){
//             int rem = n % 10;
//             product *= rem;
//             sum += rem;

//             n /= 10;
//         }

//         return (product - sum);
//     }
// };

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        //use while loop 
        while(n > 0){
            int digit = n % 10;
            sum+=digit;
            product*=digit;
            n/=10;
        }
        int ans = product - sum;
        return ans;
    }
};
