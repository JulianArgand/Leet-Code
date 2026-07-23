class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int major = 0;
        for(int i = 1; i<n; i++)
        {
            if(nums[i] >= nums[major])
            {
                major = i;
                
            }
        }
        return major;
    }
};