class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int size=nums.size()-1;
        vector <vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<size-1; i++)
        {
            if (i>0 && nums[i]==nums[i-1]) continue;
            int low=i+1;
            int high=size;
            int sum=0-nums[i];
      
            
            while(low < high)
            {
              
                if (nums[low] + nums[high] == sum)
                {
                    vector <int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    //ans.push_back({nums[i], nums[low], nums[high]});
                    ans.push_back(temp);
                    
                    while (low < high && nums[low]==nums[low+1]) low++;
                    while (low <high && nums[high]==nums[high-1])high--;
                    
                    low++;
                    high--;
                }
                
                else if(sum > (nums[low] + nums[high])) low++;
                else high--;
            }
        }
        
        return ans;
        
    }
};
