class Solution {
public:
    int findGCD(vector<int>& nums) {
        vector<int> div;
        // finding the smallest and largest element in the vector:-
        int largest = *max_element(nums.begin(),nums.end());
        int smallest = *min_element(nums.begin(), nums.end());

        for(int i=1; i<=smallest;i++){
            if(largest%i == 0 && smallest%i == 0){
                div.push_back(i);
            }
            else{
                continue;
            }

        }
        return div[div.size()-1];

    }
};