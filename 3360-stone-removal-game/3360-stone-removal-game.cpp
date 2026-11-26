class Solution {
public:
    bool canAliceWin(int n) {
        
        if(n < 10){
            return false;
        }

        char winner = 'a';
        int remove_count = 10;
        char chance = 'a';

        while(n > 0){
            if(chance == 'a'){
                n -= remove_count;
                chance = 'b';
                remove_count--;
                winner = 'a';
            }

            else{
                n -= remove_count;
                chance = 'a';
                remove_count--;
                winner = 'b';
            }
        }

        if(n == 0 && winner == 'b'){
            return false;
        }

        else if(n == 0 && winner == 'a'){
            return true;
        }

        else if(n < 0 && winner == 'b'){
            return true;
        }

        else{
            return false;
        }

    }
};