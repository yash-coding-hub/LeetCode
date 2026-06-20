// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result;

//         for(int i=0; i<n; i++){
//             if(i % 2 == 0){
//                 for(int j=0; j<n; j++){
//                     if(nums[j] == -1){
//                         continue;
//                     }
                    
//                     if(nums[j] % 2 == 0){
//                         result.push_back(nums[j]);
//                         nums[j] = -1;
//                         break;
//                     }
//                 }
//             }

//             else{
//                 for(int j=0; j<n; j++){
//                     if(nums[j] == -1){
//                         continue;
//                     }

//                     if(nums[j] % 2 != 0){
//                         result.push_back(nums[j]);
//                         nums[j] = -1;
//                         break;
//                     }
//                 }

//             }
//         }

//         return result;
//     }
// };     // THE WRONG APPROACH.....ITS A STRAIGHTFORWARD SIMPLE EVEN ODD QUE.....DONT OVERTHINK AND OVERCOMPLICATE SIMPLE THINGS.....

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();

        vector<int> result(n);

        int even = 0;
        int odd = 1;

        for(int x : nums){
            if(x % 2 == 0){
                result[even] = x;
                even += 2;
            }

            else{
                result[odd] = x;
                odd += 2;
            }
        }

        return result;
    }
};