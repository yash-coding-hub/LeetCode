class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        if(bills[0] > 5){
            return false;
        }

        int five = 0;
        int ten = 0;

        for(int i=0; i<bills.size(); i++){

        if(five >= 0 && ten >= 0){

            if(bills[i] == 5){
                five++;
            }

            else if(bills[i] == 10){
                five--;
                ten++;
            }

            else{

                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                }

                else{

                five-=3;
                }
            }
        }

        else {
            return false;
        }


        }

        if(five >= 0 && ten >= 0){
            return true;
        }

        else{

        return false;

        }


    }
};