class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        
        int alice_position = 0;
        int bob_position = plants.size()-1;

        int initialA = capacityA;
        int initialB = capacityB;

        int refillA = 0;
        int refillB = 0;

        while(alice_position <= bob_position){

            if(alice_position == bob_position){

                if(capacityA >= capacityB){

                    if(capacityA < plants[alice_position]){
                        refillA++;
                    }

                    capacityA -= plants[alice_position];
                }

                else{

                    if(capacityB < plants[bob_position]){
                        refillB++;
                    }
                    
                    capacityB -= plants[bob_position];
                }

                alice_position++;
                bob_position--;

                continue;

            }

            if(plants[alice_position] <= capacityA){
                capacityA -= plants[alice_position];
            }

            else{
                refillA++;
                capacityA = initialA;
                capacityA -= plants[alice_position];
            }

            if(plants[bob_position] <= capacityB){
                capacityB -= plants[bob_position];
            }

            else{
                refillB++;
                capacityB = initialB;
                capacityB -= plants[bob_position];

            }

            alice_position++;
            bob_position--;

        }

        return refillA + refillB;

    }
};