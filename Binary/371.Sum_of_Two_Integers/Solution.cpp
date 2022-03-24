class Solution {
public:
    int getSum(int a, int b) {
        
        if (!b) return a;
        
        return getSum(a^b, unsigned(a&b)<<1);
        
    }
};
