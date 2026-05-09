class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> diagonal;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i == j){
                    diagonal.push_back(nums[i][j]);
                }
                diagonal.push_back(nums[i][nums.size()-1-i]);
            }
        }
        int k = *max_element(diagonal.begin(), diagonal.end());
        vector<int> result;
    for(int i=0; i<diagonal.size(); i++){
    bool prime = true;

    if(diagonal[i] <= 1){
        prime = false;
    }

    for(int j=2; j*j<=diagonal[i]; j++){
        if(diagonal[i] % j == 0){
            prime = false;
            break;
        }
    }

    if(prime){
        result.push_back(diagonal[i]);
    }

}
    if(result.size() == 0){
        return 0;
    }
    else{
        return *max_element(result.begin(), result.end());
    }
    }
};