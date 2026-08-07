class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int  i = digits.size()-1; i >= 0; i--)
        {
            if(digits[i] + 1 != 10)
            {
                digits[i] += 1;
                return digits;
            }
        
            digits[i] = 0;
        }
        
        vector<int> result(n + 1, 0);
        result[0] = 1;
        return result;
            
        
    }
};