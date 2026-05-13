class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());

        int max = salary[salary.size()-1];
        int min = salary[0];
        int n = 0;
        int average = 0;

        for(int i=1; i<salary.size()-1; i++){
            average += salary[i];
            n++;
        }

        double result = (double)average/n;

        return result;
    }
};