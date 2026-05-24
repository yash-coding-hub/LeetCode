class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int j = numbers.size()-1;
        int i = 0;
        
        while(i < j && i < numbers.size()){

            if(numbers[i] + numbers[j] > target){
                j--;
            }

            else if(numbers[i] + numbers[j] == target){
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }

            else{
                i++;
            }
        }

        return result;
    }
};