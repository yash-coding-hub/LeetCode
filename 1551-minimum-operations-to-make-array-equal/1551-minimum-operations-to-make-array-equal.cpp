class Solution {
public:
    int minOperations(int n) {
        // vector<int> arr (n,0);

        // for(int i=0; i<n; i++){
        //     arr[i] = (2*i) + 1;
        // }

        // if(n % 2 != 0){
        //     int mid = arr[n/2];
        //     int sum = 0;

        //     for(int i=0; i<(n/2); i++){
        //         sum += abs(arr[i] - mid);
        //     }

        //     return sum;
        // }

        // int mid = n/2;
        // int val1 = arr[mid];
        // int val2 = arr[mid-1];
        // int final_value = (val1 + val2)/2;
        // int fsum = 0;

        // for(int i=0; i<mid; i++){
        //     fsum += abs(arr[i] - final_value);
        // }

        // return fsum;

        // ======O(N)=====APPROACH ^^^^

        return (n*n)/4;
        
    }
};