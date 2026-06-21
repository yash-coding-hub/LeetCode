class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int count_first_row = 0;
        int count_second_row = 0;
        int count_third_row = 0;
        vector<string> result;

        for(int i=0; i<words.size(); i++){

            string &s = words[i];


            for(char ch : s){

                ch = tolower(ch);

                if(ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p'){

                    count_first_row++;
                
                }

                else if(ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' || ch == 'n' || ch == 'm'){

                    count_third_row++;
                }
                else{
                    count_second_row++;
                }

                if(count_first_row > 0 && count_second_row > 0){
                    break;
                }

                else if(count_second_row > 0 && count_third_row > 0){
                    break;
                }

                else if(count_third_row > 0 && count_first_row > 0){
                    break;
                }


            }

            if(count_first_row == s.size()){
                result.push_back(s);
            }

            else if(count_second_row == s.size()){
                result.push_back(s);
            }

            else if(count_third_row == s.size()){
                result.push_back(s);
            }

            count_first_row = 0;
            count_second_row = 0;
            count_third_row = 0;

        }

        return result;
        
    }
};