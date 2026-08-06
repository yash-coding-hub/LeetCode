class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = 0;
        int rem = 0;
        bool finding = true;
        int ans = 1;
        
        while(finding){
            i = n;

            while(i > 0){

            rem = i % 10;
            i /= 10;
            ans *= rem;

            }

            if(ans % t == 0){
                finding = false;
            }
            else{
                ans = 1;
                rem = 0;
                n++;
            }
        }

        return n;
    }
};