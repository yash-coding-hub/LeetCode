class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int width = 0;
        int height = 0;

        stack<int> boundary;

        int max_area = 0;

        if(heights.size() == 0){
            return max_area;
        }

        boundary.push(0);

        for(int i=1; i<heights.size(); i++){


            while(!boundary.empty() && heights[i] <= heights[boundary.top()]){

                height = heights[boundary.top()];

                boundary.pop();

                if(boundary.empty()){
                    width = i;
                }

                else{
                    width = i - boundary.top() - 1;
                }

                if(height * width > max_area){

                    max_area = height * width;
                }
            }

            boundary.push(i);
        }

        while(!boundary.empty()){

            height = heights[boundary.top()];

            boundary.pop();


            if(boundary.empty()){
                width = heights.size();
            }

            else{
                width = heights.size() - boundary.top() - 1;
            }

            max_area = max(max_area, height * width);

        }

        return max_area;
    }
};