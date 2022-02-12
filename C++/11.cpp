class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int i = 0;
        int j = height.size()-1;
        while(i < j){
            max_water = max(max_water, ((j-i)*(min(height[i],height[j]))));
            if(height[i] < height[j]) i++;
            else if(height[i] >= height[j]) j--;
        }
        return max_water;
        
    }
};