class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea=0;
        int left=0;
        int right=height.size()-1;
        int currarea;
        int h;
        
        for (int left=0; left<height.size(); left++)
        {
            for (int right=left+1; right<height.size(); right++)
            {
                if (left >= right) break;
                
                if (height[left] > height[right] ) h=height[right];
                else h=height[left];
            
                currarea=h*(right-left);
            
                if (currarea > maxarea) maxarea=currarea;
            }  
        }
        
        return maxarea;
        
    }
};
