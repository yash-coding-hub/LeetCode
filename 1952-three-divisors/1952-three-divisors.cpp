class Solution {
public:
    bool isThree(int n) {
        vector<int> div;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(n == i*j){
                    div.push_back(i);
                }
            }
        }

        if(div.size() == 3){
            return true;
        }
        else{
            return false;
        }
        
    }
};