class Solution {
public:
    int findGCD(vector<int>& nums) {
        int answer = 0;

        sort(nums.begin(), nums.end());

        int largest = nums[nums.size()-1];
        int smallest = nums[0];

        for(int i=1; i<=smallest; i++){
            if(largest % i == 0 && smallest % i == 0){
                answer = i;
            }
        }

        return answer;
        
    }
};