class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        sort(skill.begin(), skill.end());
        long long sum = 0;

        long long i = 0;
        long long j = skill.size()-1;

        long long target = skill[i] + skill[j];
        sum += (skill[i] * skill[j]);

        i++;
        j--;

        while(j > i){

            if(target == (skill[i] + skill[j])){
                sum += (skill[i] * skill[j]);
                i++;
                j--;
            }

            else{
                return -1;
            }
        }

        return sum;

    }
};