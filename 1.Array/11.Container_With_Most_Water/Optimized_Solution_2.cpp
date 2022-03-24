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
            if (height[left] < height[right]) currarea=height[left]*(right-left);
            else currarea=height[right]*(right-left);
            
            if (currarea>maxarea) maxarea=currarea;
            
            if (height[left] < height[right]) left++;
            else right--;
        }
        
        return maxarea;
        
    }
};
