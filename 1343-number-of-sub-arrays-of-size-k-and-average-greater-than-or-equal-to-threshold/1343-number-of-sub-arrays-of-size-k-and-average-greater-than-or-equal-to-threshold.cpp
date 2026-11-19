class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int avg = 0;
        int count = 0;

        int j = k;

        int idx = 0;

        int i = idx;

        while(idx < arr.size()){

            avg += arr[idx];
            j--;

            if(j == 0){

                if(avg >= threshold * k){
                    count++;
                }

                avg = avg - arr[i];
                i++;
                j++;
            }

            idx++;

        }

        return count; //return this 
    }
};