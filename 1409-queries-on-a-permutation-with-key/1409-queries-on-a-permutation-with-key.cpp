class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;

        vector<int> permutation(m);

        int element = 0;

        for(int i=0; i<m; i++){
            permutation[i] = i+1;
        }

        for(int i=0; i<queries.size(); i++){

            element = queries[i];

            for(int j=0; j<permutation.size(); j++){

                if(permutation[j] == element){

                    ans.push_back(j);
                    permutation.erase(permutation.begin()+j);
                    permutation.insert(permutation.begin(), element);
                    break;

                }
            }
        }

        return ans;

    }
};