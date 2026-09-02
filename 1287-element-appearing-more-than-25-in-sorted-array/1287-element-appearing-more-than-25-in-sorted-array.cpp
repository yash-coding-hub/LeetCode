class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 1;
        int ans = 0;

        for(int i=0; i<arr.size()-1; i++){

            if(arr[i] != arr[i+1]){
                if(count * 4 > arr.size()){
                    ans = arr[i];
                    count = 1;
                }

                else{
                    count = 1;
                    continue;
                }
            }

            else{
                count++;
            }

        }

        if(count * 4 > arr.size()){
            ans = arr[arr.size()-1];
        }

        return ans;
        
    }
};