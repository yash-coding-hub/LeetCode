class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        vector<int> ans;

        int mid = (arr.size()-1)/2;

        int left = 0;
        int right = arr.size()-1;

        while(k > 0){

            if(abs(arr[left]-arr[mid]) > abs(arr[right]-arr[mid])){
                ans.push_back(arr[left]);
                left++;
            }

            else if(abs(arr[left]-arr[mid]) < abs(arr[right]-arr[mid])){
                ans.push_back(arr[right]);
                right--;
            }

            else{

                if(arr[left] > arr[right]){
                    ans.push_back(arr[left]);
                    left++;
                }

                else{
                    ans.push_back(arr[right]);
                    right--;
                }
            }

            k--;
        }

        return ans;
    }
};