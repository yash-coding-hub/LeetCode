class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        int ans = 0;

        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size()-1; i++){

            for(int j=0; j<i; j++){

                if(nums[i] > nums[j] ){
                    count++;
                    break;
                }
            }

            for(int k=i+1; k<nums.size(); k++){

                if(nums[k] > nums[i]){
                    count++;
                    break;
                }
            }

            if(count  == 2){
                ans++;
            }

            count = 0;
        }

        return ans;
        
    }
};