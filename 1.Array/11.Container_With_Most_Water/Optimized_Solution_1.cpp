class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea=0;
        int left=0;
        int right=height.size()-1;
        int currarea;
        int h;
        
        while (left < right)
        {
            currarea= min(height[left],height[right]) * (right-left);
            
            maxarea=max(currarea,maxarea);
            
            if (height[left] < height[right]) left++;
            else right--;
        }
        
        return maxarea;
        
    }
}
