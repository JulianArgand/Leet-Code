class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int txor = 0;
        bool nz = false;
        for(int n : nums)
        {
            txor ^= n;
            if(n != 0)
            {
                nz = true;
            }
        }
        if(txor != 0)
        {
            return nums.size();
        }
        if(nz)
        {
            return nums.size() - 1;
        }
        return 0;
    }
};