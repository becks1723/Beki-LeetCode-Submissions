//I learned this from the dicussion page from the problem; I did not come up with this method myself. 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int a = 0;
        int b = height.size()-1;
        while(a < b) {
            int heightA = min(height[a],height[b]);
            int area = heightA * (b-a);
            maxArea = max(area, maxArea);
            if(height[a] < height[b]) {
                a++;
            }
            else 
                b--;
        }
        return maxArea;
    }
};
