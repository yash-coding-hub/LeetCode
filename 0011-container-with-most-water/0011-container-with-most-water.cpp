class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int i=0;
        int j=height.size()-1;

        while(i != j){

            if(height[i] > height[j]){

                if(max_area < min(height[i],height[j]) * (j-i)){
                    max_area = min(height[i],height[j]) * (j-i);
                }

                j--;
            }

            else{
                
                if(max_area < min(height[i], height[j]) * (j-i)){
                    max_area = min(height[i], height[j]) * (j-i);
                }

                i++;
            }
        }

        return max_area;

    }
};