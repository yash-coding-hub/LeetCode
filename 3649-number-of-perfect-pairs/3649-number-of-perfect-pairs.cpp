// class Solution {
// public:
//     long long perfectPairs(vector<int>& nums) {
//         long long count = 0;
//         int i = 0;
//         int j = i+1;

//     while(i < nums.size() && j <  nums.size()){
//         if(min(abs(nums[i] - nums[j]), abs(nums[i] + nums[j])) <= min(abs(nums[i]), abs(nums[j]))
//             &&
//             max(abs(nums[i] - nums[j]), abs(nums[i] + nums[j])) >= max(abs(nums[i]), abs(nums[j]))){

//                 count++;

//             }

//         j++;

//         if(j == nums.size()){
//                 i++;
//                 j = i+1;
//             }
//     }

//         return count;
//     }
// };


class Solution {
public:
    long long perfectPairs(vector<int>& nums) {

        vector<long long> arr;

        for(int i = 0; i < nums.size(); i++){
            arr.push_back(abs((long long)nums[i]));
        }

        sort(arr.begin(), arr.end());

        long long count = 0;

        for(int i = 0; i < arr.size(); i++){

            int left = i + 1;
            int right = arr.size() - 1;
            int ans = i;

            while(left <= right){

                int mid = left + (right - left)/2;

                if(arr[mid] <= 2 * arr[i]){
                    ans = mid;
                    left = mid + 1;
                }

                else{
                    right = mid - 1;
                }
            }

            count += (ans - i);
        }

        return count;
    }
};