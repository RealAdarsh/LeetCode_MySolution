class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size= nums.size(); 
        vector <int> result(size);
        int temp=1;
        
        for (int i=0; i<size; i++)
        {
            result[i]= temp;
            temp=temp*nums[i];
        }
        
        temp=1;
        
        for (int j=size-1; j>=0; j--)
        {
            result[j]=result[j]*temp; 
            temp=temp*nums[j];  
        }
        
        return result;
       
        
    }
};
