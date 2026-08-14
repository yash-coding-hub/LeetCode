class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        vector<int> num;
        int rem = 0;
        int ans = low;
        int evensum = 0;
        int oddsum = 0;
        int count = 0;
        int i = 0;

        while(ans <= high){

            i = ans;

            while(i != 0){
            rem = i % 10;
            num.push_back(rem);
            i = i / 10;
            }

            if(num.size() % 2 != 0){
                evensum = 0;
                oddsum = 0;
                num.clear();
                ans++;
                rem = 0;
            }

            else{

            for(int k=0; k<num.size()/2; k++){
                evensum+=num[k];
            }

            for(int j=num.size()/2; j<num.size(); j++){
                oddsum+=num[j];
            }

            if(evensum == oddsum && evensum != 0){
                count++;
            }

            evensum = 0;
            oddsum = 0;
            num.clear();
            ans++;
            rem = 0;
            
            }
        }

        return count;

    }
};